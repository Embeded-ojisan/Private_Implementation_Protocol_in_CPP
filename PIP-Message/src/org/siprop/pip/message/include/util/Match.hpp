#ifndef MATCH_H
#define MATCH_H

#include "macro.hpp"

class Match
{
public:
    virtual ~Match() {};
    virtual bool match(std::string);
};

#endif // MATCH_H