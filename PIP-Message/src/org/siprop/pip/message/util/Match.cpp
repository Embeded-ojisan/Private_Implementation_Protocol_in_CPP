#include "util/Match.hpp"


class Match
{
public:
    virtual bool match(std::string searchString) = 0;
}