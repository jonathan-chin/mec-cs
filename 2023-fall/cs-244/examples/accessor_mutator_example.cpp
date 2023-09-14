// create a general person class
// that has accessors and mutators for the name

/*
    variable scope

*/

#include <iostream>

class Person {
    private:
        std::string name = "";
    public:
        // accessor
        // getter
        std::string getName(std::string relationship){
            // new keyword that is available in a class
            // this
            if(relationship == "stranger"){
                return "no thank you";
            }else if(relationship == "parent"){
                return name;
            }
        }

        // mutator
        // setter
        void setName(std::string newName, std::string relationship){
            if(name == "" && relationship == "parent"){
                name = newName;
            }else{
                // do nothing
            }
        }
};z

int main(){
    Person john;

    //john.name = "John Smith";
    john.setName("John Smith");
    john.setName("Steve Smith");

    std::cout << john.getName() << "\n";
}
