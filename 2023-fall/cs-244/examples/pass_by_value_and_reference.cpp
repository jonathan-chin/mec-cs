#include <iostream>

void passByValue(int argument){
  std::cout << "  defaultPassByValue() called\n"
	    << "  with argument = " << argument << "\n";
  argument *= 1234;
  std::cout << "  within defaultPassByValue(), argument = " << argument << "\n";
}

void passByReference(int &argument){
  std::cout << "  defaultPassByReference() called\n"
	    << "  with argument = " << argument << "\n";
  argument *= 1234;
  std::cout << "  within defaultPassByReference(), argument = " << argument << "\n";
}

int main(){
  int variable = 10;
  std::cout << "variable before passByValue() called = " << variable << "\n";
  passByValue(variable);
  std::cout << "variable after passByValue() called = " << variable << "\n";
  std::cout << "variable before passByReference() called = " << variable << "\n";
  passByReference(variable);
  std::cout << "variable after passByReference() called = " << variable << "\n";
}
