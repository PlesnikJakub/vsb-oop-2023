#pragma once
#include "Vehicle.h"

class Car : public Vehicle
{
private:
	int seatCount;
public:
	Car(int seatCount);
	Car(int seatCount, double maxSpeed);
	int GetSeatCount();
};

