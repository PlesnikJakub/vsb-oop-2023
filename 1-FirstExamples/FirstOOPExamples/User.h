#pragma once
#include <string>

using namespace std;

class User
{
private:
	int id;
	string name;

public:
	User(int id, string name);
	void SetId(int id);
	int GetId();
	void SetName(string n);
	string GetName();
	string ToString();
};

