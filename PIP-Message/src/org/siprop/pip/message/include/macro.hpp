#ifndef MACRO_H
#define MACRO_H

#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>

// JavaのObject型を模擬
class Object
{
public:
private:
};

// JavaのClass型を模擬
class Class
{
public:
private:
};

// JavaのParseException型を模擬
class ParserException : std::exception
{
public:
private:
};

extern std::string ToString(std::vector<char> vec);

// JavaのInstanceofを模擬
    template <typename Of, typename What>
    inline bool instanceof(const What w)
    {
        return dynamic_cast<const Of>(w) != 0;
    }

/*
    template <typename Of, typename What>
    inline bool instanceof(const What &w)
    {
        return dynamic_cast<const Of*>(&w) != 0;
    }
*/

// Javaのインターフェースを模擬
// 参考は以下
// https://moewe-net.com/c-cpp/cpp-interface
    // Cloneable
    template <typename T>
    class Cloneable
    {
    public:
        virtual ~Cloneable() {};
        virtual T clone() = 0;
    };

    // Serializable
    // 作成不可
    /*
        class Serializable
        {
        public:
            virtual ~Serializable() {};
            virtual ObjectOutputStream ObjectOutputStream();
        };
    */

#endif // MACRO_H