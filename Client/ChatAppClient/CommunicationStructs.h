#pragma once

#include <string>

//ÿһ���ṹ����һ��type��Ա����ע���ݰ�������
//0 Ϊע����Ϣ
//1 Ϊ��¼��Ϣ

namespace commu {
	struct HEAD {
		char type;
		unsigned int userSize;
		unsigned int passwordSize;
	};
	struct REGISTER {
		HEAD head;
		char userName[64];
		char password[128];
	};

	struct LOGIN {
		HEAD head;
		char userName[64];
		char password[128];
	};
	
}
