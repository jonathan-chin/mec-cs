#include "Station.h"
#include <iostream>

int main(){
    Station s = Station();
    std::string command;
    int battery;
    bool didAddPhone;
    std::cout << "Welcome to the charging station simulator\n";
    do{
        std::cout << "Enter a command: ";
        std::cin >> command;
        if(command == "print"){
            s.print();
        }else if(command == "get"){
            s.getPhone();
        }else if(command == "charge"){
            s.charge();
        }else if(command == "drain"){
            s.drain();
        }else if(command == "add"){
            std::cout << "What battery level? ";
            std::cin >> battery;
            didAddPhone = s.addPhone(battery);
            if(didAddPhone == false){
                std::cout << "Sorry, station is full.\n";
            }
        }else{
            // not needed because assume user input is perfect
            // std::cout << "I don't understand; try again\n";
        }


    }while(command != "quit");

}