#include "macro.hpp"

#include <string>
#include <string_view>

#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>

std::string VectoredCharToString(std::vector<char>);

std::string StringToStringView(std::string_vew);

std::string VectoredCharToString(
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

std::string StringToStringView(std::string_vew view)
{
    return (
        std::string(
            view.data()
        )
    );
}
