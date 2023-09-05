#include <iostream>

double square(double inputNumber){
    return inputNumber * inputNumber;
}

int main(){
    std::cout << "The square of 1.2 is "
      << square(1.2);
}