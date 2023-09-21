#include <iostream>

// ask user for integer and print factorial of it
int main() {
  int inputNumber;
  long long factorial = 1; // need long long because factorial could be large

  std::cout << "Enter a non-negative integer: ";
  std::cin >> inputNumber;

  if (inputNumber < 0) {
    // error; factorial not defined for < 0
    std::cout << "Please enter a non-negative integer." << std::endl;
    return 1;
  }

  while (inputNumber > 0) {
    factorial *= inputNumber;
    inputNumber--;
  }

  std::cout << "The factorial is: " << factorial << std::endl;  	
  return 0;
}
