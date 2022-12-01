#include <iostream>         //標準入出力
#include <sys/socket.h>     //アドレスドメイン
#include <sys/types.h>      //ソケットタイプ
#include <arpa/inet.h>      //バイトオーダの変換に利用
#include <unistd.h>         //close()に利用
#include <string>           //string型

//https://www.siprop.org/ja/2.0/へ通信

int main()
{
    char *serviceType = "http";
    struct addrinfo hints, *res;

    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if(sockfd < 0)
    {
        std::cout << "Error socket:" << std::stderror(errno);
        exit(1);
    }

    memset(&hints, 0, sizeof(hints));
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_family = AF_INET;

    if(
        (
            err = getaddrinfo(
                "www.siprop.org",
                serviceType,
                &hints,
                &res
            )
        ) != 0
    )
    {
        std::cout << "Error host:" << std::stderror(errno);
        exit(1);
    }

    if(
        connect(
            s,
            res->ai_addr,
            res->ai_addrlen
        ) != 0
    )
    {
        std::cout << "Error connect:" << std::stderror(errno);
        exit(1);
    }
}