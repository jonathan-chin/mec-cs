#include "Truck.h"
#include "Vehicle.h"
#include <iostream>

int main(){
    // because setPriceOfGas is a static member function, it can be called before we have any instances of Vehicle or Truck
    Vehicle::setPriceOfGas(5);

    Truck t1 = Truck(
        4,
        100,
        100,
        "Four Wheeler",
        "red",
        "Apple Laptops",
        1000
    );
    Truck t2 = Truck(
        6,
        70,
        80,
        "Six Wheeler",
        "blue",
        "Apples",
        999
    );
    Truck t3 = Truck(
        4,
        50,
        120,
        "Four Wheeler",
        "white",
        "HP Laptops",
        1250
    );

    double costToRefuel;
    costToRefuel = t1.addGas(50);
    std::cout << "The cost to add 50 gallons of gas to t1 is "
        << costToRefuel << "\n";

    std::cout << "The price of gas has changed!\n";
    Vehicle::setPriceOfGas(1.5); // updating here will update for all existing and future objects

    costToRefuel = t1.addGas(50);
    std::cout << "The cost to add 50 gallons of gas to t1 is now "
        << costToRefuel << "\n";
}
