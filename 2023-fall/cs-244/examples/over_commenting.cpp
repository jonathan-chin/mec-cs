#include <iostream>

// this program will ask the user for an integer and print out the factorial of that number
int main() {
  // this is the number the user will enter
  int num;
  // store the result in a long long because it might be a large number
  long long factorial = 1;

  // the next 2 lines will prompt the user to enter a non-negative integer
  std::cout << "Enter a non-negative integer: ";
  std::cin >> num;

  if (num < 0) {
    // the user has entered a number less than zero
    std::cout << "Please enter a non-negative integer." << std::endl;
    return 1; // exit with an error code
  }

  // this while loop calculates the factorial of the entered number
  while (num > 0) {
    factorial *= num;
    num--; // decrement the num variable so the while loop will end
  }

  // this line will display the result of the factorial
  std::cout << "The factorial is: " << factorial << std::endl;
  	
  // return 0 because no error has been made
  return 0;
}
