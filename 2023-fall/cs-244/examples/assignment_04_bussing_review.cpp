#include <iostream>

class Bus;

class Passenger{
    private:
        std::string route;
        std::string name;
        std::string boardingStatus = "waiting";

    public:
        Passenger(std::string, std::string);
        std::string getRoute();
        std::string getName();
        std::string getBoardingStatus();
        void boardBus(Bus);
};


Passenger::Passenger(std::string newRoute, std::string newName){
    route = newRoute;
    name = newName;
}

std::string Passenger::getRoute(){
    return route;
}

std::string Passenger::getName(){
    return name;
}

std::string Passenger::getBoardingStatus(){
    return boardingStatus;
}



class Bus{
    private:
        std::string route;
        int passengerCount = 0;

    public: 
        Bus(std::string);
        Bus();
        void boardPassenger(Passenger);
        std::string getRoute();
        int getPassengerCount();
};


Bus::Bus(std::string newRoute){
    route = newRoute;
}

Bus::Bus(){
    route = "Not in Service";
}

void Bus::boardPassenger(Passenger p){
    if(p.getRoute() == route){
        passengerCount++;
    }else{
        // otherwise do nothing
    }
}

std::string Bus::getRoute(){
    return route;
}

int Bus::getPassengerCount(){
    return passengerCount;
}

void Passenger::boardBus(Bus b){
    if(b.getRoute() == route){
        boardingStatus = "on bus";
    }else{
        // do nothing
    }
}


int main(){
    Bus b1 = Bus("Q38");
    Bus b2 = Bus("B9");
    Bus b3 = Bus();
    Passenger p1 = Passenger("Q38", "johnson");
    Passenger p2 = Passenger("Q38", "nathaniel");
    Passenger p3 = Passenger("Q38", "yashadii");
    Passenger p4 = Passenger("Q38", "ehinowen");
    Passenger p5 = Passenger("B9", "naser");
    Passenger p6 = Passenger("B9", "gabrielle");
    Passenger p7 = Passenger("Q15", "sharielle");
    Passenger p8 = Passenger("Q39", "foucharna");
    Passenger p9 = Passenger("BX10", "montel");
    Passenger p10 = Passenger("SI1", "elijah");
    b1.boardPassenger(p1);
    b1.boardPassenger(p2);
    b1.boardPassenger(p3);
    b1.boardPassenger(p4);
    b1.boardPassenger(p5);
    b1.boardPassenger(p6);
    b1.boardPassenger(p7);
    b1.boardPassenger(p8);
    b1.boardPassenger(p9);
    b1.boardPassenger(p10);
    // repeat with b2 and b3
    p1.boardBus(b1);
    p2.boardBus(b1);
    // etc

    // print out everything
    std::cout << "b1: "
    << b1.getRoute()
    << " with "
    << b1.getPassengerCount()
    << "\n";
    // etc

    std::cout << "p1: "
    << p1.getName()
    << " "
    << p1.getBoardingStatus();
    // etc

    return 0;
}