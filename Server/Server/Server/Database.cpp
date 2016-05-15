#include "Database.h"
#include <sstream>

Database::Database()
{
	using namespace std;
	initialUsers();
	initialFriends();
	
}
int Database::checkUser(const std::string & user, const std::string & password)
{
	if (users.find(user) == users.end())
		return 1;
	else {
		if (password.empty())
			return 2;
		else if (users[user] != password)
			return 3;
		else
			return 4;
	}
}

void Database::addUser(const std::string & user, const std::string & password)
{
	if (users.find(user) == users.end()) {
		users[user] = password;
		std::fstream fs("users.txt", std::fstream::out | std::fstream::app | std::fstream::ate);
		fs << user << " " << password << "\n";
		fs.close();
	}
}

void Database::initialUsers()
{
	using namespace std;
	fstream fs("users.txt", fstream::in);
	string str, user, password;
	while (getline(fs, str)) {
		if (str.empty() || str[0] == '/')
			continue;
		stringstream ss(str);
		ss >> user;
		ss >> password;
		users[user] = password;
	}
	fs.close();
}

void Database::initialFriends()
{
	using namespace std;
	fstream fs("friends.txt", fstream::in);
	string str, user, password;
	while (getline(fs, str)) {
		if (str.empty() || str[0] == '/')
			continue;
		stringstream ss(str);
		ss >> user;
		while(ss >> password)
			friends[user].insert(password);
	}
	fs.close();
}
