#pragma once

class Position
{
private:
	long double lng;
	long double lat;

public: 
	Position(long double lng, long double lat);
	long double GetLng();
	long double GetLat();
	double GetDistance(Position* other);
};

