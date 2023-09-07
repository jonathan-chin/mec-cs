#include <iostream>

int main(){
  // be careful dividing by integers!
  // this will result in 0
  //double answer = 5 / 9;

  // putting one of the numbers as a decimal will force C++ to do decimal division
  double answer = 5.0 / 9;
  std::cout << answer;
}
