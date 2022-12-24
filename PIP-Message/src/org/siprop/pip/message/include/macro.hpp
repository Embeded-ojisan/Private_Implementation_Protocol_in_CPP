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