#include "macro.hpp"

#include "parser/StringMsgParser.hpp"
#include "parser/HeaderParser.hpp"
#include "parser/ParserFactory.hpp"
#include "parser/Lexer.hpp"

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

std::vector<char> ParserTest::loadText(
    std::string fileName
)
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
            std::cout 
                << "ERR: 読み込むファイル名を指定してください"
                << std::endl;
            return -1;
        }
        
        message = Parser.loadText(std::string(argv[1]));
        std::cout 
            << "メッセージ読み込み成功" 
            << std::endl;
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
/*
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
*/
}