#include "parser/StringMsgParser.hpp"

#include "Parser.hpp"

#include "PIPMessage.hpp"

#include <vector>
#include <string>

StringMsgParser::StringMsgParser(ParseExceptionListener *exhandler)
    : StringMsgParser()
{
    setParseExceptionListener(exhandler);
}

void StringMsgParser::setParseExceptionListener(ParseExceptionListener *pexhandler)
{
    this->parseExceptionListener = pexhandler;
}

PIPMessage* StringMsgParser::parsePIPMessage(std::vector<char> message)
{
    PIPMessage *pipMessage;
    return pipMessage;
}
