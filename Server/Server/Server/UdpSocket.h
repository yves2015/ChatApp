#pragma once
#include<WinSock2.h>

#pragma comment(lib,"WS2_32.lib")

class UdpSocket
{
public:
	UdpSocket(int port = 15950);
	~UdpSocket();
	int sendData(char *buff, unsigned int size, SOCKADDR_IN *pAddr, int len);
	int recvData(char *buff, unsigned int size, SOCKADDR_IN *pAddr, int *pLen);
private:
	SOCKET m_socket;
};

