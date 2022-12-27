#ifndef PARSERFACTORY_H
#define PARSERFACTORY_H

#include "macro.hpp"

#include "parser/HeaderParser.hpp"

#include "Parser.hpp"

#include <unordered_map>

class ParserFactory
{
public:
    HeaderParser createParser(std::string);

private:
    static std::unordered_map<std::string>  parserTable;
    static Class                            constructorArgs;
    {
    private:
        /* data */
    public:
        ParserFactory(/* args */);
        ~ParserFactory();
    };
    
    ParserFactory::ParserFactory(/* args */)
    {
    }
    
    ParserFactory::~ParserFactory()
    {
    }
    
};

#endif // #define PARSERFACTORY_H