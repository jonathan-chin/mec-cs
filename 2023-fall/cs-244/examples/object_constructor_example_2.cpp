// write C++ code to mimic a banking system
// with protections and pin code

#include <iostream>

class Account {
    private:
        std::string accountNumber;
        int balance;
        std::string accountType;

    public:
        Account(int, std::string);
        int withdraw(int, std::string);
        int getAccountNumber();
        int getBalance();
        std::string getAccountType();
};

int Account::withdraw(int amount, std::string inputAccountNumber){
    // validation logic here
    if(accountNumber == inputAccountNumber){
        std::cout << "withdraw successful with account "
            << inputAccountNumber
            << "\n";
    }else{
        std::cout << "withdraw not successful with account "
            << inputAccountNumber
            << "\n";
    }
}

Account::Account(int startingBalance, std::string newAccountNumber){
    accountNumber = newAccountNumber;
    balance = startingBalance;
}

class Person {
    private:
        std::string accountNumber;

    public:
        Account createAccount(int);
        Person(std::string);
        std::string getAccountNumber();
};

Person::Person(std::string newAccountNumber){
    accountNumber = newAccountNumber;
}

std::string Person::getAccountNumber(){
    return accountNumber;
}

Account Person::createAccount(int startingTotal){
    Account newAccount(1000, accountNumber);
    return newAccount;
}

int main(){
    Person personA("1234");
    Person personB("5678");
    Account accountA = personA.createAccount(100);
    accountA.withdraw(100, personA.getAccountNumber());
    accountA.withdraw(100, personB.getAccountNumber());
    return 0;
}