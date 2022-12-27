#ifndef LEXER_H
#define LEXER_H

#include "macro.hpp"

#include "parser/Lexer.hpp"

#include "util/LexerCore.hpp"

#include <string>

class Lexer: public LexerCore
{
public:
    Lexer(std::string, std::string);

    std::string getHeaderName(std::string);
    std::string 

private:
};

#endif // LEXER_H