#pragma once
#include "Driver.h"
#include "Car.h"
#include "Position.h"

class Drive
{
private:
	Driver* driver;
	Car* car;
	Position** positions;
	int positionCount;

public:
	Drive(Driver* d, Car* c);
	~Drive();
	void AddPosition(long double lng, long double lat);
	double GetTotalDistance();
};

