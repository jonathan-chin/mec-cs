#include "Station.h"
#include "Phone.h"

Station::Station(){
    // default constructor
    size = 0;
}

bool Station::addPhone(int battery){
    if(size >= 5){
        // not enough room
        return false;
    }else{
        // there's still room
        Phone newPhone = Phone(battery);
        phones[size] = newPhone;
        size++;
        return true;
    }
};

Phone Station::getPhone(){
    // assume function never gets called if there are 0 phones
    size--;
    return phones[size];
};

void Station::charge(){
    for(int index = 0; index < size; index++){
        phones[index].charge();
    }
};

void Station::drain(){
    for(int index = 0; index < size; index++){
        phones[index].drain();
    }
};

void Station::print(){
    for(int index = 0; index < size; index++){
        phones[index].print();
    }
};