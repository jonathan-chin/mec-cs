#include "Vehicle.h"
#include <string>

// when using static member variables, also need to declare them
double Vehicle::priceOfGas = 1; // set default value of static member variable

void Vehicle::setPriceOfGas(double newPriceOfGas){ // static member function
    priceOfGas = newPriceOfGas;
}

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

int Vehicle::getNumWheels() const{
    return numWheels;
}

int Vehicle::getPriceOfGas() const{
    return priceOfGas;
}

/*
// non static member function
void Vehicle::setPriceOfGas(double newPrice){
    priceOfGas = newPrice;
}
*/

double Vehicle::addGas(int amountToAdd){
    double cost = amountToAdd * priceOfGas;
    gas += amountToAdd;
    return cost;
}

int Vehicle::getGas() const{
    return gas;
}
// etc;
