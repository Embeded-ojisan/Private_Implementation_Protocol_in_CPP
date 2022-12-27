#ifndef PARSEREXCEPTIONLISTENER_H
#define PARSEREXCEPTIONLISTENER_H

#include "macro.hpp"

#include "Parser.hpp"

#include "PIPMessage.hpp"

class ParseExceptionListener
{
public:
    virtual ~ParseExceptionListener() {};

    virtual void handleException(
        ParserException ex
        ,PIPMessage* pipMessage
        ,Class headerClass
        ,std::string headerText
        ,std::string messageText
    );
private:
};

#endif // PARSEREXCEPTIONLISTENER_H