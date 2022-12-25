#include "parser/StringMsgParser.hpp"

PIPMessage* parsePIPMessage(std::vector<char>);

StringMsgParser::StringMsgParser(ParseExceptionListener exhandler)
    : StringMsgParser()
{
    setParseExceptionListener(exhandler);
}

void StringMsgParser::setParseExceptionListener(ParseExceptionListener pexhandler)
{
    this->parseExceptionListener = pexhandler;
}

PIPMessage* StringMsgParser::parsePIPMessage(std::vector<char> message)
{
    PIPMessage pipMessage;
    return &pipMessage;
}