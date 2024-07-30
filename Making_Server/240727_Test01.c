#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock2.h>

#define BUFSIZE 1024

void ErrorHandling(char *message) {
    WSACleanup();
    fputs(message, stderr);
    fputc('\n', stderr);
    _getch();
    exit(1);
}

int main(int argc, char **argv) {
    WSADATA wsaData;
    SOCKET servSock, clntSock;
    SOCKADDR_IN servAddr, clntAddr;

    char message[BUFSIZE];
    int strLen;
    int fromLen, nRcv;

    if(argc != 2) {
        printf("Please, Insert Port Number\n");
        exit(1);
    }

    if(WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
        ErrorHandling("Load WinSock 2.2 DLL Error");
    
    servSock = socket(PF_INET, SOCK_STREAM, 0);

    if(servSock == INVALID_SOCKET)
        ErrorHandling("Socket Error");
    
    
}