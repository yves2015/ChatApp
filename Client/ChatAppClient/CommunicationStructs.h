#pragma once

#include <string>

//每一个结构都有一个type成员，标注数据包的作用
//0 为注册信息
//1 为登录信息

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
