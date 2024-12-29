#include <iostream>

//example of a user defined function

returnType functionName(){ //this is the function header
    //This is the function body
}

// Definition of user defined function doPrint()
// doPrint() is called in main()
void doPrint(){
    std::cout << "In doPrint()\n";
}

int main(){
    std::cout << "Starting main()\n";
    doPrint(); //Interupt main() by making a function call
    std::cout << "Ending main()\n";
    return 0;
}

//Functions can call functions, that call other functions
//Nested functions are not supported


