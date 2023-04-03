#include "Car.h"


Car::Car(string id)
{
	this->id = id;
}

string Car::GetId()
{
	return this->id;
}
