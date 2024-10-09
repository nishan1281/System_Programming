#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <psdk_inc/_ip_types.h>
using namespace std;

int main() {
    SOCKET serverSocket = INVALID_SOCKET;
    serverSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (serverSocket == INVALID_SOCKET)
    {
        cout << "Error at socket(): " << WSAGetLastError() <<endl;
        WSACleanup();
        return 0;
    }

    else
    {
        cout << "socket() is OK!" <<endl;
    }
}