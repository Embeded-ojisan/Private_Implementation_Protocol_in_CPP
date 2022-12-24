#include "macro.hpp"

class Match
{
public:
    virtual ~Match() {};
    virtual bool match(std::string);
};