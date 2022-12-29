#ifndef PIPCONTACTS_H
#define PIPCONTACTS_H

#include "macro.hpp"

#include "header/PIPHeaderNames.hpp"
#include "header/ParameterNames.hpp"

#include "address/ParameterNames.hpp"

class PIPConstants : public PIPHeaderNames, public ParameterNames, public ParameterNames
{
public:
    static int DEFAULT_PORT = 5060;
    static int DEFAULT_TLS_PORT = 5061;
private:
}

#endif // PIPCONTACTS_H