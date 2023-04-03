#pragma once
#include <string>

using namespace std;

class Car
{
private:
	string id;
public:
	Car();
	Car(string id);
	string GetId();
};

