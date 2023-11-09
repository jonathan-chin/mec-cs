#include "Truck.h"

Truck::Truck(){
    // in Truck default constructor
    Vehicle(); // call parent class default constructor just in case
    maxMerchandise = 100;
    merchandiseCount = 0;
    merchandiseType = "unknown";
}

Truck::Truck(
    int newNumWheels,
    int newMaxGas,
    int newTopSpeed,
    std::string newType,
    std::string newColor,
    std::string newMerchandiseType,
    int newMaxMerchandise
){
    Vehicle(newNumWheels, newMaxGas, newTopSpeed, newType, newColor);
    merchandiseType = newMerchandiseType;
    maxMerchandise = newMaxMerchandise;
}

int Truck::getMerchandiseCount(){
    return merchandiseCount;
}

int Truck::getMaxMerchandise(){
    return maxMerchandise;
}