#include <iostream>
#include "Car.h"
#include "Driver.h"
#include "Drive.h"

int main()
{
    std::cout << "Lets Goo!\n";

    Car* myCar = new Car("1T20007");
    Driver* me = new Driver("Jakub");
    Drive* driveToSchool = new Drive(me, myCar);

    driveToSchool->AddPosition(17.9024128, 49.9384314); // Opava City Center
    driveToSchool->AddPosition(18.1636009, 49.8337283); // VSB-TU Ostrava

    std::cout << "Total distance: " << driveToSchool->GetTotalDistance() << " km" <<  std::endl;
}
