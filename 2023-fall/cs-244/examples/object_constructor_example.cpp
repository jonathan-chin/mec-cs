#include <iostream>

class Cat {
    private:
        double topSpeed; // KpH
        double weight; // K
        std::string name;
        std::string color;
    public:
        Cat(){
            // default constructor
            name = "no name yet";
            color = "gray";
        }

        ~Cat(){
            // destructor
            // perform any sort of cleanup logic / code here
        }

        Cat(std::string newName, std::string newColor){
            // constructor that takes in a name and color at start
            name = newName;
            color = newColor;
        }

        Cat(std::string, std::string, double, double); // function prototype / signature

        std::string getName(){
            return name;
        }

        std::string getColor(){
            return color;
        }
};

Cat::Cat(std::string newName, std::string newColor, double newTopSpeed, double newWeight){
    name = newName;
    color = newColor;
    topSpeed = newTopSpeed;
    weight = newWeight;
}

int main(){
    Cat francis; // calls default constructor
    Cat sonnet("Sonnet", "brown"); // calls the user defined constructor
}