#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {

    private:
        static double priceOfGas;
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

        int getNumWheels() const;
        int getPriceOfGas() const;
        // void setPriceOfGas(double); // non static member function
        static void setPriceOfGas(double); // static member function
        double addGas(int); // returns total cost of refueling
        int getGas() const;

        /*
        void print();
        int getMaxGas();
        int getTopSpeed();
        */
};

#endif