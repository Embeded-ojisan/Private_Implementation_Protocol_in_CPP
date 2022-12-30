#ifndef PIPCONTACTS_H
#define PIPCONTACTS_H

#include "macro.hpp"

#include "header/PIPHeaderNames.hpp"
#include "header/ParameterNames.hpp"

#include "address/ParameterNames.hpp"

#include <string_view>

class PIPConstants : public PIPHeaderNames, public ParameterNames
{
public:
    const static int                    DEFAULT_PORT                    = 5060;
    const static int                    DEFAULT_TLS_PORT                = 5061;
    static constexpr std::string_view   BRANCH_MAGIC_COOKIE             = "z9hG4bK";
    static constexpr std::string_view   BRANCH_MAGIC_COOKIE_LOWER_CASE  = "z9hg4bk";
    static constexpr std::string_view   PIP_VERSION_STRING              = "PIP/1.0";
private:
};

#endif // PIPCONTACTS_H