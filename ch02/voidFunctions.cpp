#include <iostream>

//Functions that use void do not require a return value
//return statements can be used in a void function, with no return value
//but this is redundant


void printHi(){
    std::cout << "Hi!" << '\n';
}

int main(){
    printHi();
    return 0;
}

//Certain contexts such as std::cout require a value to be returned
//Sometimes we call functions for their behaviour and not their value
//Returning a value from a void function is a compile error
