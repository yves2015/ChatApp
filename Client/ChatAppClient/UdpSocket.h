#pragma once
#include<WinSock2.h>
#include<string>

#pragma comment(lib,"WS2_32.lib")

class UdpSocket
{
public:
	UdpSocket(const std::string &servIP = "127.0.0.1", int servPort = 15950, int selfPort = 9999);
	~UdpSocket();
	int sendData(char *buff, unsigned int size);
	int recvData(char *buff, unsigned int size);
private:
	SOCKET m_socket;
	SOCKADDR_IN m_servAddr;
};

