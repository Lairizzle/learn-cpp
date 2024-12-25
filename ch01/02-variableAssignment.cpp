#include <iostream>

int main(){
    int x;      //define an integer variable named x
    int y, z;   //define two integer variables, named y and z
    int width;  //define an integer variable named width
    width = 5;  //assignment of value 5 into variable width
    
    std::cout << width; //prints the value 5
    
    width = 7;

    std::cout << width; // prints 7

    int initializedWidth { 8 }; //You can define a variable and initialize the value
    std::cout << initializedWidth;

    //Traditional initialization forms:
    int a;          //default no initializer
    int b = 5;      //copy-initialization  
    int c ( 6 );    //direct-initialization
    
    //Modern initialization forms:
    int d { 7 };    //direct-list-initialization
    int e {};       //value-initialization

    return 0;
}

