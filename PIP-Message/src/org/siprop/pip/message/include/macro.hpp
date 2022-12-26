#ifndef MACRO_H
#define MACRO_H

#include <string>
#include <iostream>

// JavaのObject型を模擬
using Object = void*;

// JavaのClass型を模擬
using Class = void*;

// JavaのParseException型を模擬
using ParserException = std::exception;

// JavaのInstanceofを模擬
    template <typename Of, typename What>
    inline bool instanceof(const What &w)
    {
        return dynamic_cast<const Of*>(&w) != 0;
    }

    template <typename Of, typename What>
    inline bool instanceof(const What w)
    {
        return dynamic_cast<const Of*>(w) != 0;
    }

// Javaのインターフェースを模擬
// 参考は以下
// https://moewe-net.com/c-cpp/cpp-interface
    // Cloneable
    class Cloneable
    {
    public:
        virtual ~Cloneable() {};
        virtual void clone() = 0;
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