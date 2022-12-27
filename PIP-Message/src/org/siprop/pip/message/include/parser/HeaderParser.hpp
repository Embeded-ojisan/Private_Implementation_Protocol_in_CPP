#ifndef HEADERPARSER_H
#define HEADERPARSER_H

#include "macro.hpp"

#include "Parser.hpp"

#include <chrono>
#include <string>

class HeaderParser
{
public:
    HeaderParser(std::string);
    HeaderParser(Lexer);

    PIPHeader*      parse(void);
private:
    std::chrono     data(void);
    void            time(std::chrono);

    void            headerName(int);
};

#endif // HEADERPARSER_H