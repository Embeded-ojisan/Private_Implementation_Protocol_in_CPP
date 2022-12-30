#ifndef GENERICOBJECT_H
#define GENERICOBJECT_H

#include "macro.hpp"

#include "util/Separators.hpp"
#include "util/Match.hpp"

#include <unordered_set>
#include <string>

class GenericObject
{
public:
	GenericObject();

    void setMatcher(Match matchExpression);
    
    Match getMatcher();
    
    void sprint(int);

private:
    static std::string      SEMICOLON;
    static std::string      COLON;
    static std::string      COMMA;
    static std::string      SLASH;
    static std::string      SP;
    static std::string      EQUALS;
    static std::string      STAR;
    static std::string      NEWLINE;
    static std::string      RETURN;
    static std::string      LESS_THAN;
    static std::string      GREATER_THAN;
    static std::string      AT;
    static std::string      DOT;
    static std::string      QUESTION;
    static std::string      POUND;
    static std::string      AND;
    static std::string      LPAREN;
    static std::string      RPAREN;
    static std::string      DOUBLE_QUOTE;
    static std::string      QUOTE;
    static std::string      HT;
    static std::string      PERCENT;

    static std::unordered_set<std::string> immutableClasses;

    static int              indentation;
    static std::string      stringRepresentation;
    static Match            matchExpression;

	std::string getIndentation();

    void sprint(Object);

    void sprint(std::string);
};

#endif // GENERICOBJECT_H