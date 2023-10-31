#ifndef PHONE_H
#define PHONE_H

#include <iostream>

class Phone {
    private:
        int battery;
        std::string status;
        void updateStatus();

    public:
        Phone();
        Phone(int);

        void charge();
        void drain();
        void print();
};

#endif