#include "User.h"

User::User(int id, string name)
{
	this->id = id;
	this->name = name;
}

void User::SetId(int id)
{
	this->id = id;
}

int User::GetId()
{
	return this->id;
}

void User::SetName(string n)
{
	this->name = n;
}

string User::GetName()
{
	return this->name;
}

string User::ToString()
{
	return "User Id: " + std::to_string(this->GetId()) + " Name: " + this->GetName();
}




