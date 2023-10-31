#ifndef STATION_H
#define STATION_H

#include "Phone.h"

class Station {
    private:
        Phone phones[5];
        int size;
    
    public:
        Station();
        bool addPhone(int);
        Phone getPhone();
        void charge();
        void drain();
        void print();
};

#endif