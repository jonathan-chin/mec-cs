#include "Vehicle.h"
#include <string>

Vehicle::Vehicle(){
    mileage = 0; // assume vehicle is new and has never been driven
    type = "unknown";
    color = "unknown";
    numWheels = 4; // most vehicle have 4 wheels
    gas = 0;
    maxGas = 100;
    topSpeed = 100;
}

Vehicle::Vehicle(
    int newNumWheels,
    int newMaxGas,
    int newTopSpeed,
    std::string newType,
    std::string newColor
){
    Vehicle(); // call vehicle default constructor
    numWheels = newNumWheels;
    maxGas = newMaxGas;
    topSpeed = newTopSpeed;
    type = newType;
    color = newColor;
}

int Vehicle::getNumWheels(){
    return numWheels;
}

// etc;