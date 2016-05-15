#include "UdpSocket.h"
#include <iostream>


UdpSocket::UdpSocket(int port)
{
	WSADATA wsaData;
	int err;
	err = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (err != 0) {
		std::cout << "WSAStartup failed with error: %d\n" << std::endl;
		return;
	}

	m_socket = socket(AF_INET, SOCK_DGRAM, 0);

	SOCKADDR_IN  servAddr;
	memset(&servAddr, 0, sizeof(servAddr));
	servAddr.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
	servAddr.sin_family = AF_INET;
	servAddr.sin_port = htons(port);

	bind(m_socket, (sockaddr *)&servAddr, sizeof(servAddr));
}


UdpSocket::~UdpSocket()
{
	closesocket(m_socket);
}

int UdpSocket::sendData(char * buff, unsigned int size, SOCKADDR_IN * pAddr, int len)
{
	return sendto(m_socket, buff, size, 0, (SOCKADDR *)pAddr, len);
}

int UdpSocket::recvData(char * buff, unsigned int size, SOCKADDR_IN * pAddr, int * pLen)
{
	return recvfrom(m_socket, buff, size, 0, (SOCKADDR *)pAddr, pLen);
}
