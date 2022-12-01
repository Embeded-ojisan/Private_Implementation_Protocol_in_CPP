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
    char send_buf[256];

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

    sprintf(send_buf, "GET / HTTP/1.0\r\n");
    write(s, send_buf, strlen(send_buf));

    sprintf(send_buf, "Host:www.siprop.org\r\n\r\n");
    write(s, send_buf, strlen(send_buf));

    while(1) {
        char buf[BUF_LEN];
        int read_size;
        read_size = read(s, buf, BUF_LEN);

        if (read_size > 0) {
            write(1, buf, read_size);
        }
        else {
            break;
        }
    }
}