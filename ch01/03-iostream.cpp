#include <iostream>
#include <ostream>

//The input output library is a standard c++ library

int main(){
    int x = 5;

    std::cout << "Hello world! My number is: " << x << std::endl; //prints hello world to console
    
    std::cout << "You might want something on a new line." << std::endl;
    
    //endl can be slow, so the alternative \n for new line is often used
    std::cout << "This is my new line" << '\n';
    std::cout << "Yes it is" << '\n';

    //We can get data input using std::cin
    int myNumber{};         //Initialize the variable
    std::cin >> myNumber;   //Get user input and assign
    std::cout << "The number you entered is:  " << myNumber << '\n';
    
    int myFirstNumber{};
    int mySecondNumber{};
    std::cin >> myFirstNumber >> mySecondNumber;
    std::cout << "My first number is: "   << myFirstNumber    << '\n' 
        << "My second number is: "  << mySecondNumber   << '\n';

    //Mini Question: Ask the user to input three values:
    std::cout << "Input three values: " << '\n';
    
    int valueOne{};
    int valueTwo{};
    int valueThree{};
    
    std::cin >> valueOne >> valueTwo >> valueThree;
    std::cout << "You entered " << valueOne << ", " << valueTwo << ", and " << valueThree;

    return 0;
}
