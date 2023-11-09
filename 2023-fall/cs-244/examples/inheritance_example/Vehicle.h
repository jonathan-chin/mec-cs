#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {

    private:
        int mileage;
        std::string type;
        std::string color;
        int numWheels;
        int gas;
        int maxGas;
        int topSpeed;

    public:
        Vehicle();
        Vehicle(
            int, //numWheels
            int, //maxGas
            int, //topSpeed
            std::string, //type
            std::string //color
        );

        int getNumWheels();
        /*
        bool addGas();
        int getGas();
        void print();
        int getMaxGas();
        int getTopSpeed();
        */
};

#endif