#include <sys/socket.h>     //アドレスドメイン
#include <sys/types.h>      //ソケットタイプ
#include <arpa/inet.h>      //バイトオーダの変換に利用
#include <unistd.h>         //close()に利用
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/param.h>
#include <unistd.h>

#include <iostream>         //標準入出力
#include <string>           //string型
#include <cstring>

//https://www.siprop.org/ja/2.0/へ通信

int main()
{
    char *serviceType = "http";
//    struct addrinfo hints;
//    struct sockaddr_in *res;
    char send_buf[256];
    int s;

    struct addrinfo hints;
    struct addrinfo *res;
    struct in_addr addr;
    int err;

    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if(sockfd < 0)
    {
        std::cout << "Error host:" << std::endl;
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
        std::cout << "Error host:" << std::endl;
        exit(1);
    }

    if(
        connect(
            sockfd,
            res->ai_addr,
            res->ai_addrlen
        ) != 0
    )
    {
        std::cout << "Error connect:" << std::endl;
        exit(1);
    }

    sprintf(send_buf, "GET / HTTP/1.0\r\n");
    write(sockfd, send_buf, strlen(send_buf));

    sprintf(send_buf, "Host:www.siprop.org\r\n\r\n");
    write(sockfd, send_buf, strlen(send_buf));

    while(1) {
        char buf[256];
        int read_size;
        read_size = read(sockfd, buf, 256);

        if (read_size > 0) {
            write(1, buf, read_size);
        }
        else {
            break;
        }
    }
}