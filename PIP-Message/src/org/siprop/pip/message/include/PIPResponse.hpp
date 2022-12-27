#ifndef PIPRESPONSE_H
#define PIPRESPONSE_H

#include "macro.hpp"

#include "Address.hpp"
#include "Header.hpp"

#include "PIPMessage.hpp"
#include "PIPRequest.hpp"

#include <string>
#include <list>
#include <vector>

class PIPResponse: public PIPMessage
{
public:
    static const int    RINGING                                 = 100;
    static const int    OK                                      = 200;
    static const int    BAD_REQUEST                             = 400;
    static const int    FORBIDDEN                               = 403;
    static const int    METHOD_NOT_ALLOWED                      = 405;
    static const int    REQUEST_TIMEOUT                         = 408;
    static const int    UNSUPPORTED_MEDIA_TYPE                  = 415;
    static const int    UNSUPPORTED_URI_SCHEME                  = 416;
    static const int    CALL_OR_TRANSACTION_DOES_NOT_EXIST      = 481;
    static const int    BUSY_HERE                               = 486;
    static const int    REQUEST_TERMINATED                      = 487;
    static const int    NOT_ACCEPTABLE_HERE                     = 488;

    PIPResponse();

    Object              clone();

    std::string         toString(void);

    PIPRequest*         createRequest(PipUri, CSeqHeader);
    PIPRequest*         createRequest(PipUri, CSeqHeader, FromHeader, ToHeader);

    std::string         getReasonPhrase(int);

    void                setStatusCode(int);
    void                setReasonPhrase(std::string);
    void                setStatusLine(StatusLine);
    void                setPIPVersion(std::string);

    StatusLine          getStatusLine(void);
    int                 getStatusCode(void);
    std::string         getReasonPhrase(void);
    std::list<char>     getMessageAsEncodedStrings(void);
    std::string         getDialogId(bool);
    std::string         getDialogId(bool, std::string);
    std::string         getFirstLine(void);
    std::string         getPIPVersion(void);

    bool                isFinalResponse(int);
    bool                isFinalResponse(void);

    void                checkHeaders(void);

    std::string         encode(void);
    std::string         encodeMessage(void);

    bool                equals(Object);
    bool                match(Object);

    std::vector<char>   encodeAsBytes(void);

private:
    StatusLine          statusLine;
};

#endif // PIPRESPONSE_H