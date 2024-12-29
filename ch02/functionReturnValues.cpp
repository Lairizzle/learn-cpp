#include <iostream>

//Functions can return values
//Consider the following:

int getValueFromUser(){
    std::cout << "Enter and integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main(){
    
    int num {getValueFromUser()};
    //print the value doubled
    std::cout << num << " doubled is: " << num * 2 << '\n';

    return 0;
}

//Main cannot be called explicitly
//Status codes indicate if the program ran correctly, main will return 0 if everything ran correctly
//A value returning function that does not return a value will produce undefined behaviour
