/*
    to demonstrate how to use class member functions before they are defined
    to do this, we need class prototype

    let's build Restaurant and Customer classes
*/

#include <iostream>

// would be our [Class].h
class Customer{
    public:
        std::string getName();
};

class Restaurant{
    public:
        std::string getCustomerName(Customer);
};

// this code would be our [Class].cpp

std::string Restaurant::getCustomerName(Customer c){
    return c.getName();
};

std::string Customer::getName(){
    return "Jon Chin";
};

// this code would be our main.cpp

int main(){}