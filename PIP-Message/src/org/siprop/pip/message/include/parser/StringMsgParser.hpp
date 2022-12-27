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
    bool readBody;
    ParseExceptionListener* parseExceptionListener;
    std::string rawStringMessage;

    std::string trimEndOfLine(std::string);

    PIPMessage* processFirstLine(std::string);

    void processHeader(std::string, PIPMessage* message);

};

#endif // STRINGMSGPARSR_H