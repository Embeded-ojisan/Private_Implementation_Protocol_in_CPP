#include "macro.hpp"

#include "PIPMessage.hpp"
#include "PIPRequest.hpp"
#include "PIPResponse.hpp"

#include "Address.hpp"
#include "Header.hpp"
#include "Parser.hpp"
#include "Util.hpp"

#include <string>
#include <fstream>
#include <iostream>
#include <cstddef>
#include <cstring>
#include <vector>

using namespace std::literals;

class ParserTest
{
public:
    std::vector<char> loadText(std::string);
};

std::vector<char> ParserTest::loadText(std::string fileName)
{
    std::ifstream in(fileName);
    std::vector<char> buf;
    char ch;
    int index = 0;

    if(!in.is_open())
    {
        throw std::exception();
    }

    while(!in.eof())
    {
        in.get(ch);
        buf.push_back(ch);
    }

    return buf;
}

int main(int argc, char *argv[])
{

    std::vector<char> message;
    ParserTest Parser;

    try
    {
        if(argc < 1)
        {
            std::cout << "ERR: 読み込むファイル名を指定してください" << std::endl;
            return -1;
        }
        
        message = Parser.loadText(std::string(argv[1]));
        std::cout << "メッセージ読み込み成功" << std::endl;
    }
    catch(std::exception& ex)
    {
        std::cerr 
            << "ERR: ファイル読み込み中にエラーが発生しました" 
            << std::endl;
        return -1;
    }
    
    try
    {
        PIPMessage *pipMessage;
        StringMsgParser parser;
        
        pipMessage = parser.parsePIPMessage(message);
        std::cout
            << "メッセージパース成功："
            << std::endl;
    }
    catch(const ParserException& ex)
    {
        std::cerr << ex.what() << '\n';
    }
}