#include "macro.hpp"

#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>

std::string ToString(std::vector<char>);

std::string ToString(
    std::vector<char> vec
)
{
    std::stringstream ss;
    for(
        auto it = vec.begin();
        it != vec.end();
        it++
    ) 
    {
        if(it != vec.begin())
        {
            ss << ", ";
        }
        ss << *it;
    }

    return ss.str();
}