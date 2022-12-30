#ifndef STATUSLINE_H
#define STATUSLINE_H

#include "macro.hpp"

#include "util/PIPConstants.hpp"

#include <string>
#include <string_view>

class StatusLine : public PIPObject, public Object
{
public:
    bool        match(Object);

    std::string encode(void);

private:
    const long serialVersionUID = -4738092215519950414L;

    bool matchStatusClass;

    std::string pipVersion;

    int statusCode;

    std::string reasonPhrase;
};

bool StatusLine::match(Object matchObj)
{
    if(instanceof<StatusLine, Object>(matchObj))
        return false;

    StatusLine* s1 = (StatusLine*)(&matchObj);

    if(s1->pipVersion.compare(pipVersion))
    {
        return false;
    }
}

std::string StatusLine::encode(void)
{
    std::string encoding = PIPConstants::PIP_VERSION_STRING + Separators::SP + this->statusCode;
    if(!(this->reasonPhrase.empty()))
    {
        encoding += Separators::SP + this->reasonPhrase;
    }

    encoding += Separators::NEWLINE;
    return encoding;
}

#endif // STATUSLINE_H