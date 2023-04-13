#pragma once
class Vehicle
{
private:
	double maxSpeed;

public:
	Vehicle();
	Vehicle(double speed);
	virtual double GetMaxSpeed();
};

