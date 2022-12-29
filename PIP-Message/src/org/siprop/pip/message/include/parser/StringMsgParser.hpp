#ifndef STRINGMSGPARSR_H
#define STRINGMSGPARSR_H

#include "macro.hpp"

#include "parser/ParseExceptionListener.hpp"

#include "Address.hpp"
#include "Header.hpp"
#include "Parser.hpp"
#include "Util.hpp"

#include "PIPMessage.hpp"

#include <vector>
#include <string>

class StringMsgParser
{
public:
    StringMsgParser(void);
    StringMsgParser(ParseExceptionListener*);

    void                setParseExceptionListener(ParseExceptionListener*);

    PIPMessage*         parsePIPMessage(std::vector<char>);
    PIPMessage*         parsePIPMessage(std::string);

    Address             parseAddress(std::string);
    PipUri              parsePIPUrl(std::string);
    URI                 parseUrl(std::string);

    Host                parseHost(std::string);
    TelephoneNumber     parseTelephoneNumber(std::string);
    PIPHeader           parsePIPHeader(std::string);
    RequestLine         parsePIPRequestLine(std::string);
    StatusLine          parsePIPStatusLine(std::string);

private:
    bool                readBody;
    ParseExceptionListener* parseExceptionListener;
    std::string         rawStringMessage;

    std::string         trimEndOfLine(std::string);

    PIPMessage*         processFirstLine(std::string);

    void                processHeader(std::string, PIPMessage* message);

};

std::string StringMsgParser::trimEndOfLine(
    std::string line
)
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

/*
void StringMsgParser::handleException(
		ParserException ex,
		PIPMessage* pipMessage,
		Class headerClass,
		std::string headerText,
		std::string messageText
)
{
		throws ParseException;
}
*/

PIPMessage* StringMsgParser::parsePIPMessage(
    std::vector<char> msgBuffer
)
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

    PIPMessage *pipMessage;
    return pipMessage;
}

StringMsgParser::StringMsgParser(void)
{
    ;
}

StringMsgParser::StringMsgParser(
    ParseExceptionListener *exhandler
)
    : StringMsgParser()
{
    setParseExceptionListener(exhandler);
}

void StringMsgParser::setParseExceptionListener(
    ParseExceptionListener *pexhandler
)
{
    this->parseExceptionListener = pexhandler;
}

void StringMsgParser::processHeader(
    std::string header,
    PIPMessage* message
)
{
/*
    if(true == header.empty() || 0 == header.size())
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
    
*/
}

#endif // STRINGMSGPARSR_H