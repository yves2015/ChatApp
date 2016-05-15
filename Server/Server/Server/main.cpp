
#include "Database.h"
#include "CommunicationStructs.h"
#include "UdpSocket.h"
#include <string>
#include <WinSock2.h>
#include <iostream>

#pragma comment(lib,"WS2_32.lib")

char *recvData = new char[1024*10];

int main(int argc, char *argv[])
{
	using namespace commu;
	Database db;

	UdpSocket udpSocket;

	SOCKADDR_IN  cliAddr;
	int cliLen = sizeof(cliAddr);

	while(true) {

		int nRead = udpSocket.recvData(recvData, 10240, &cliAddr, &cliLen);

		REGISTER reg;
		memset(&reg, 0, sizeof(REGISTER));
		memcpy(&reg, recvData, sizeof(REGISTER));
		
		char c = 0;
		if (db.checkUser(std::string(reg.userName)) == 1) {
			db.addUser(std::string(reg.userName), std::string(reg.password));
			c = 0;
		}
		else
			c = 1;
		udpSocket.sendData(&c, 1, &cliAddr, cliLen);
	}
	return 0;
}
