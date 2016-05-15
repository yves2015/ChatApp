#pragma once

#include<fstream>
#include<unordered_map>
#include<unordered_set>
#include<string>


class Database {
public:
	Database();
	//û���û�������1�� �����û��������������뷵��2�� �����û��������벻ƥ�䷵��3���û��������붼ƥ�䷵��4
	int checkUser(const std::string &user, const std::string &password = "");
	
	//�����ݿ�������û�
	void addUser(const std::string &user, const std::string &password);

private:
	std::unordered_map<std::string, std::string> users;
	std::unordered_map<std::string, std::unordered_set<std::string>> friends;
	void initialUsers();
	void initialFriends();
};