#include "UdpSocket.h"
#include <iostream>


UdpSocket::UdpSocket(const std::string &servIP, int servPort, int selfPort)
{
	WSADATA wsaData;
	int err;
	err = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (err != 0) {
		std::cout << "WSAStartup failed with error: %d\n" << std::endl;
		return;
	}

	m_socket = socket(AF_INET, SOCK_DGRAM, 0);

	//设置自己的ip地址和端口
	SOCKADDR_IN  addr;
	memset(&addr, 0, sizeof(addr));
	addr.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
	addr.sin_family = AF_INET;
	addr.sin_port = htons(selfPort);
	int bindRet = -1;

	//如果端口被占用，则递增
	while ((bindRet = bind(m_socket, (sockaddr *)&addr, sizeof(addr)) != 0)) {
		addr.sin_port = htons(++selfPort);
	}
	//设置对端ip地址和端口
	m_servAddr.sin_family = AF_INET;
	m_servAddr.sin_addr.S_un.S_addr = inet_addr(servIP.c_str());
	m_servAddr.sin_port = htons(servPort);
}


UdpSocket::~UdpSocket()
{
	closesocket(m_socket);
}

int UdpSocket::sendData(char * buff, unsigned int size)
{
	return sendto(m_socket, buff, size, 0, (SOCKADDR *)&m_servAddr, sizeof(m_servAddr));
}

int UdpSocket::recvData(char * buff, unsigned int size)
{
	return recvfrom(m_socket, buff, size, 0, NULL, NULL);
}
