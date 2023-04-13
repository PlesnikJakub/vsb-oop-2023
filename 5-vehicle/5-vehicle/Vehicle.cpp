#include "Vehicle.h"

Vehicle::Vehicle()
{
	this->maxSpeed = 0;
}

Vehicle::Vehicle(double speed)
{
	this->maxSpeed = speed;
}

double Vehicle::GetMaxSpeed()
{
	return this->maxSpeed;
}
