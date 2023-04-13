#include "Car.h"

Car::Car(int seatCount) : Vehicle()
{
	this->seatCount = seatCount;
}

Car::Car(int seatCount, double maxSpeed) : Vehicle(maxSpeed)
{
	this->seatCount = seatCount;
}

int Car::GetSeatCount()
{
	return this->seatCount;
}
