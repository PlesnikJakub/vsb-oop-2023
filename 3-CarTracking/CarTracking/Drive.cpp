#include "Drive.h"

Drive::Drive(Driver* d, Car* c)
{
	this->driver = d;
	this->car = c;
	this->positions = new Position*[10];
	this->positionCount = 0;
}

Drive::~Drive()
{
    for (int i = 0; i < this->positionCount; i++)
    {
        delete this->positions[i];
        this->positions[i] == nullptr;
    }

    delete[] this->positions;
}

void Drive::AddPosition(long double lng, long double lat)
{
	this->positions[this->positionCount] = new Position(lng, lat);
    this->positionCount++;
}

double Drive::GetTotalDistance()
{
    double distanceSum = 0;
    if (this->positionCount < 2)
        return 0;

    for (int i = 0; i < this->positionCount-1; i++)
    {
        distanceSum += this->positions[i]->GetDistance(this->positions[i + 1]);
    }

	return distanceSum;
}

