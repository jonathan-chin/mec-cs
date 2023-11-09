#include "Truck.h"
#include <iostream>

int main(){
    Truck t = Truck(
        4,
        100,
        100,
        "Four Wheeler",
        "red",
        "Apple Laptops",
        1000
    );
    std::cout << t.getNumWheels();

}