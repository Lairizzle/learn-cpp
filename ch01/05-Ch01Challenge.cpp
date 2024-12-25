#include <iostream>

int main(){
    //The challenge is to write a program that asks for two numbers and adds and subtracts them from each other.
    
    int numberOne{};
    int numberTwo{};

    std::cout << "Please enter two numbers: ";
    std::cin >> numberOne >> numberTwo;
    std::cout << numberOne << " + " << numberTwo << " is " << numberOne + numberTwo << '\n';
    std::cout << numberOne << " - " << numberTwo << " is " << numberOne - numberTwo << '\n';

    return 0;
}

