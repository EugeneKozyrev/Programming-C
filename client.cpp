#include <iostream>
#include <winsock2.h>
#include <conio.h>
#include <stdio.h>
#include <string>

#pragma comment(lib, "Ws2_32.lib")

#define  SERVER_PORT 3820


int main() {

	std::string error_msg = "Error: ";
	std::string info_msg = "Info: ";
	std::string warning_msg = "Warning: ";

	SOCKET ClientSock = INVALID_SOCKET;
	WSADATA WSStartData;

	char DefaultIPAddr[] = "127.0.0.1";

	struct sockaddr_in Addr;

	WSADATA wsaData;

	int iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);

	if (iResult < 0) {
		std::cout << '\n' << error_msg << "WSAStartup was failed" << '\n';
		getchar();
		exit(0);
	}

		
	ClientSock = socket(AF_INET, SOCK_STREAM, 0);
	
	memset(&Addr, 0, sizeof(Addr));

	Addr.sin_family = AF_INET;
	Addr.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
	Addr.sin_port = htons(SERVER_PORT);

	DWORD size = 20;
	char* localIP;

	int u = connect(ClientSock, (struct sockaddr*)&Addr, sizeof(Addr));

	if (u == INVALID_SOCKET) {
		std::cout << error_msg << "Unable connect to remote server" << '\n';    
		getchar();	
		return 0;
	} else std::cout << info_msg << "Connection to remote server was successfully done" << '\n';
	
	int bytes = 0;
	char rez[34] = "";
	char buf[20] = "Begin";
	int len;

	std::cout << "Input: ";
	gets(buf);
	len = sizeof(buf);

	send(ClientSock, (char*)buf, len, 0);
	bytes = recv(ClientSock, (char*)rez, sizeof(rez), 0);
	if (bytes == -1) std::cout << warning_msg << "Result received with error" << '\n';
	else std::cout << rez;


	shutdown(ClientSock, 2);
	closesocket(ClientSock);
	WSACleanup();
	std::cout << '\n' << "Exit from the client part" << '\n';
	getchar();
	return 0;
}
