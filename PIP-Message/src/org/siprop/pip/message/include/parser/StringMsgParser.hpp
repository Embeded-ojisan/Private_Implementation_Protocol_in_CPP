#ifndef STRINGMSGPARSR_H
#define STRINGMSGPARSR_H

#include "macro.hpp"

#include "parser/ParseExceptionListener.hpp"

#include "PIPMessage.hpp"

class StringMsgParser
{
public:
    StringMsgParser() {};
    StringMsgParser(ParseExceptionListener);

    void setParseExceptionListener(ParseExceptionListener);
private:
    bool readBody;
    ParseExceptionListener parseExceptionListener;
    std::string rawStringMessage;
    PIPMessage parsePIPMessage(std::vector<char>);
};

#endif // STRINGMSGPARSR_H