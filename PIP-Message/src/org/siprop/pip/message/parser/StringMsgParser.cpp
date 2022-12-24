#include "parser/StringMsgParser.hpp"


StringMsgParser::StringMsgParser(ParseExceptionListener exhandler)
    : StringMsgParser()
{
    setParseExceptionListener(exhandler);
}

void setParseExceptionListener(ParseExceptionListener pexhandler)
{
    this->parseExceptionListener = pexhandler;
}