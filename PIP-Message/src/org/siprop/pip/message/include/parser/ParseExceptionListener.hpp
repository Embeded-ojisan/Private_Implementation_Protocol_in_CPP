#ifndef PARSEREXCEPTIONLISTENER_H
#define PARSEREXCEPTIONLISTENER_H

#include "macro.hpp"

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
};

#endif // PARSEREXCEPTIONLISTENER_H