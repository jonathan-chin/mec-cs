#include "Phone.h"
#include <iostream>

Phone::Phone(){
    // default constructor
    // assume phone comes already precharged
    battery = 100;
    status = "green";
};

Phone::Phone(int newBattery){
    // make sure that battery is between 0 and 100
    if(newBattery < 0){
        battery = 0;
    } else if(newBattery > 100){
        battery = 100;
    } else {
        battery = newBattery;
    }

    updateStatus();
};

void Phone::updateStatus(){
    // since status needs to change depending on battery
    // and we change battery in at least 3 places
    // separate out code into own function to keep DRY
    if(battery <= 20){
        status = "red";
    }else if(battery > 20 && battery < 80){
        status = "yellow";
    }else{
        status = "green";
    }
};

void Phone::charge(){
    if(battery >= 100){
        battery = 100;
    }else{
        battery += 5;
    }
    updateStatus();
}

void Phone::drain(){
    if(battery <= 0){
        battery = 0;
    }else{
        battery -= 5;
    }
    updateStatus();
}

void Phone::print(){
    // use std::cout because of program specs
    std::cout << battery << " " << status << "\n";
}