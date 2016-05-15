#pragma once

#include<fstream>
#include<unordered_map>
#include<unordered_set>
#include<string>


class Database {
public:
	Database();
	//没有用户名返回1， 存在用户名但不检验密码返回2， 存在用户名但密码不匹配返回3，用户名和密码都匹配返回4
	int checkUser(const std::string &user, const std::string &password = "");
	
	//向数据库添加新用户
	void addUser(const std::string &user, const std::string &password);

private:
	std::unordered_map<std::string, std::string> users;
	std::unordered_map<std::string, std::unordered_set<std::string>> friends;
	void initialUsers();
	void initialFriends();
};