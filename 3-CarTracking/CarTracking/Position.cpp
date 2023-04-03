#define _USE_MATH_DEFINES

#include "Position.h"
#include "MathUtils.h"
#include <cmath>

Position::Position(long double lng, long double lat)
{
	this->lng = lng;
	this->lat = lat;
}

long double Position::GetLng()
{
	return this->lng;
}

long double Position::GetLat()
{
	return this->lat;
}

double Position::GetDistance(Position* other)
{
    // Convert the latitudes
    // and longitudes
    // from degree to radians.

    // MathUtils* math = new MathUtils();
    // long double latx = math->ToRadians(this->GetLat());

    long double lat1  = MathUtils::ToRadians(this->GetLat());
    long double long1 = MathUtils::ToRadians(this->GetLng());
    long double lat2  = MathUtils::ToRadians(other->GetLat());
    long double long2 = MathUtils::ToRadians(other->GetLng());

    // Haversine Formula
    long double dlong = long2 - long1;
    long double dlat = lat2 - lat1;

    long double ans = pow(sin(dlat / 2), 2) +
        cos(lat1) * cos(lat2) *
        pow(sin(dlong / 2), 2);

    ans = 2 * asin(sqrt(ans));

    // Radius of Earth in
    // Kilometers, R = 6371
    // Use R = 3956 for miles
    long double R = 6371;

    // Calculate the result
    return ans * R;
}
