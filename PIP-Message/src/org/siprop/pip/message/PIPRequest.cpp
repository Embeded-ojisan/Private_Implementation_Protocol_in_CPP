#include "PIPRequest.hpp"

#include "PIPResponse.hpp"

Object              PIPResponse::clone()
{
    Object obj;
    return obj;
}

/*
PIPRequest*         createRequest(PipUri, CSeqHeader);
PIPRequest*         createRequest(PipUri, CSeqHeader, FromHeader, ToHeader);

std::string         getReasonPhrase(int);
*/

void                PIPResponse::setStatusCode(int a)
{
    ;
}

/*
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
*/

void                PIPResponse::checkHeaders(void)
{
    ;
}

/*
std::string         encode(void);
std::string         encodeMessage(void);

bool                equals(Object);
bool                match(Object);

std::vector<char>   encodeAsBytes(void);
*/

std::string         PIPResponse::toString(void)
{
    std::string str;
    return str;
}
