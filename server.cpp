#include <iostream>
#include <winsock2.h>
#include <conio.h>
#include <string>

#pragma comment(lib, "Ws2_32.lib")

#define SERVER_PORT 3820


int main() {

	std::string error_msg = "Error: ";
	std::string info_msg = "Info: ";
	std::string warning_msg = "Warning: ";

	struct sockaddr_in SrvAddr;
	struct sockaddr_in ConnAddr;

	SOCKET SrvSock, Conn;
	WSADATA wsaData;

	int iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);fgfdgfdgfdgewtgwetgre gregfhgefhgdrhn
g
	if (iResult < 0) {
		std::cout << error_msg << "WSAStartup was failed" << '\n';
		getchar();
		exit(0);
	}


	SrvSock = socket(AF_INET, SOCK_STREAM, 0);

	SrvAddr.sin_family = AF_INET;
	SrvAddr.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
	SrvAddr.sin_port = htons(SERVER_PORT);

	bind(SrvSock, (sockaddr *)&SrvAddr, sizeof SrvAddr); 

	listen(SrvSock, 5); 

	std::cout << info_msg << "...Server is up to state..." << '\n';

	int AddrLen = sizeof(ConnAddr); 
	char buf_in[20];
	char exit[20] = "Exit";
	char buf_out[34] = "Hello from server!";
	int nsize;
	int bytes = 0;
	bool stop = false;
	 

	while(1) {
		Conn = accept(SrvSock, (struct sockaddr *) &ConnAddr, &AddrLen);
		//HOSTENT* hst ;
		//hst = gethostbyaddr((char *)&ConnAddr. sin_addr.s_addr, 4, AF_INET);
		//cout<<"Подключился " << inet_ntoa(ConnAddr.sin_addr)<<endl;

		bytes = recv(Conn, (char *)buf_in, sizeof (buf_in), 0);
		std::cout << buf_in << '\n';
		send(Conn, (char *) buf_out, sizeof (buf_out) , 0);
	}

	shutdown(Conn,2);
	closesocket(Conn);

	std::cout << '\n' << info_msg <<  "Exit from the server part" << '\n';
	getch();
	return 0;
}
