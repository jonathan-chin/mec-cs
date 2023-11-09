#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
#include <string>

class Truck: public Vehicle{
    private:
        std::string merchandiseType;
        int merchandiseCount;
        int maxMerchandise;

    public:
        Truck();
        Truck(
            int, //numWheels
            int, //maxGas
            int, //topSpeed
            std::string, //type
            std::string, //color
            std::string, //merchandiseType
            int //maxMerchandise
        );

        int getMerchandiseCount();
        int getMaxMerchandise();
        //void print();
};

#endif