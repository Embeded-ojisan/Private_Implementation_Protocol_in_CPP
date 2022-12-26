#ifndef PIPMESSAGE_H
#define PIPMESSAGE_H

#include "macro.hpp"

#include "MessageObject.hpp"

#include "Header.hpp"

#include <list>
#include <vector>


class PIPMessage : public Cloneable , public MessageObject
{
public:
    virtual void checkHeaders();

private:
    std::string_view                    DEFAULT_ENCODING = "UTF-8";

	/**
	 * unparsed headers
	 */
    std::list<std::string>              unrecognizedHeaders;

	/**
	 * List of parsed headers (in the order they were added)
	 */
    std::list<std::string>              headers;

	/**
	 * Direct accessors for frequently accessed headers
	 */
    FromHeader                          fromHeader;
    ToHeader                            toHeader;
    CSeqHeader                          cSeqHeader;
    CallIdHeader                        callIdHeader;
    ContentLengthHeader                 contentLengthHeader;

    // Cumulative size of all the headers.
    int                                 size;

    // Payload
    std::string                         messageContent;
    std::vector<std::string>            messageContentBytes;
    Object                              messageContentObject;

	// Table of headers indexed by name.
    std::unordered_set<std::string>     nameTable;
};

#endif // PIPMESSAGE_H