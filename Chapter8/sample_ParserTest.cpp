#include "macro.hpp"

#include "parser/StringMsgParser.hpp"
#include "parser/HeaderParser.hpp"
#include "parser/ParserFactory.hpp"

#include "Address.hpp"
#include "Header.hpp"
#include "Parser.hpp"
#include "Util.hpp"

#include "MessageFactory.hpp"
#include "MessageObject.hpp"
#include "PIPMessage.hpp"
#include "PIPRequest.hpp"
#include "PIPResponse.hpp"

#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>

using namespace std::literals;

class ParserTest
{
public:
    std::vector<char> loadText(std::string);
};

std::vector<char> ParserTest::loadText(std::string fileName)
{
    std::ifstream in(fileName);
    std::vector<char> buf;
    char ch;
    int index = 0;

    if(!in.is_open())
    {
        throw std::exception();
    }

    while(!in.eof())
    {
        in.get(ch);
        buf.push_back(ch);
    }

    return buf;
}

std::string ToString(std::vector<char> vec)
{
    std::stringstream ss;
    for(auto it = vec.begin(); it != vec.end(); it++) {
        if(it != vec.begin())
        {
            ss << ", ";
        }
        ss << *it;
    }

    return ss.str();
}

// 名前解決できないため、一旦、オーバーライド
std::string StringMsgParser::trimEndOfLine(std::string line)
{
    if(line.empty() == true)
    {
        return line;
    }

    int i = line.size() - 1;
    while(i >= 0 && line.at(i) <= 0x20)
        i--;

    if(i == line.size() - 1)
    {
        return line;
    }

    if(i == -1)
    {
        return "";
    }

    return line.substr(0, i+1);
}

void StringMsgParser::handleException(
		ParseException ex,
		PIPMessage pipMessage,
		Class headerClass,
		String headerText,
		String messageText
)
{
		throws ParseException;
}

// 名前解決できないため、一旦、オーバーライド
void StringMsgParser::processHeader(
    std::string header, PIPMessage* message
)
{
    if(true == header.empty || 0 == header.size())
        return ;
    
    HeaderParser headerParser = nullptr;
    try
    {
        headerParser = ParserFactory.createParser(header + "\n");
    }
    catch(ParseException e)
    {
        this
            ->parseExceptionListener
            ->handleException(
                e, message, nullptr, header, this->rawStringMessage
            );
    }

    try
    {
        PIPHeader* pipHeader = headerParser->parse();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}

// 名前解決できないため、一旦、オーバーライド
PIPMessage* StringMsgParser::parsePIPMessage(std::vector<char> msgBuffer)
{
    if(
        msgBuffer.empty() == false
        || msgBuffer.size() == 0
    )
    {
        return nullptr;
    }

    int i = 0;

    try{
        while(msgBuffer.at(i) < 0x20)
            i++;
    }
    catch(std::out_of_range& ex){
        return nullptr;
    }

    std::string currentLine = nullptr;
    std::string currentHeader = nullptr;
    bool isFirstLine = true;
    PIPMessage *message = nullptr;
    
    do{
        int lineStart = i;

        try
        {
            while(
                msgBuffer.at(i) != '\r'
                && msgBuffer.at(i) != '\n'
            )
                i++;
        }
        catch(std::out_of_range& ex){
            break;
        }
        int lineLength = i - lineStart;

        currentLine = ToString(msgBuffer);

        currentLine = this->trimEndOfLine(currentLine);

        if(currentLine.size() == 0)
        {
            if(false == currentHeader.empty())
            {
                this->processHeader(currentHeader, message);
            }
        }
        else
        {
            ;
        }

    }while (currentLine.size() > 0);

    return message;
}

int main(int argc, char *argv[])
{

    std::vector<char> message;
    ParserTest Parser;
    PIPMessage *pipMessage;

    argv[1] = "a.txt";

    try
    {
        if(argc < 1)
        {
            std::cout << "ERR: 読み込むファイル名を指定してください" << std::endl;
            return -1;
        }
        
        message = Parser.loadText(std::string(argv[1]));
        std::cout << "メッセージ読み込み成功" << std::endl;
    }
    catch(std::exception& ex)
    {
        std::cerr 
            << "ERR: ファイル読み込み中にエラーが発生しました" 
            << std::endl;
        return -1;
    }
    
    try
    {
        StringMsgParser *parser;
        
        pipMessage = parser->parsePIPMessage(message);
        std::cout
            << "メッセージパース成功："
            << std::endl;
    }
    catch(const ParserException& ex)
    {
        std::cerr << ex.what() << '\n';
    }

/*
    if(
        instanceof<PIPRequest>(*pipMessage)
    )
    {
        std::cout
            << "ERR: PIPレスポンスではありません"
            << std::endl;
    }
*/
    try
    {
        PIPResponse* pipResponse = (PIPResponse *)pipMessage;
        pipResponse->setStatusCode(400);
        std::cout
            << "書き換え成功："
            << pipResponse->toString()
            << std::endl;
    }
    catch(ParserException ex)
    {
        ;
    }
}