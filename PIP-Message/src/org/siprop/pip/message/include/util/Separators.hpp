#ifndef SEPARATORS_H
#define SEPARATORS_H

#include "macro.hpp"

class Separators final
{
public:
    static constexpr std::string_view SEMICOLON         = ";";
    static constexpr std::string_view COLON             = ":";
    static constexpr std::string_view COMMA             = ",";
    static constexpr std::string_view SLASH             = "/";
    static constexpr std::string_view SP                = " ";
    static constexpr std::string_view EQUALS            = "=";
    static constexpr std::string_view STAR              = "*";
    static constexpr std::string_view NEWLINE           = "\r\n";
    static constexpr std::string_view RETURN            = "\n";
    static constexpr std::string_view LESS_THAN         = "<";
    static constexpr std::string_view GREATER_THAN      = ">";
    static constexpr std::string_view AT                = "@";
    static constexpr std::string_view DOT               = ".";
    static constexpr std::string_view QUESTION          = "?";
    static constexpr std::string_view POUND             = "#";
    static constexpr std::string_view AND               = "&";
    static constexpr std::string_view LPAREN            = "(";
    static constexpr std::string_view RPAREN            = ")";
    static constexpr std::string_view DOUBLE_QUOTE      = "\"";
    static constexpr std::string_view QUOTE             = "\'";
    static constexpr std::string_view HT                = "\t";
    static constexpr std::string_view PERCENT           = "%";
};

#endif // SEPARATORS_H
