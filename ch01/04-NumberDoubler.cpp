#include <iostream>

int main(){
    int userNumber{};

    std::cout << "Please enter an integer: " << '\n';
    std::cin >> userNumber;
    int doubledNumber{userNumber*2};
    std::cout << "Double that number is: " << doubledNumber << '\n';
    
    //Preferred way would be to calculate it in the cout
    std::cout << "Triple that number is: " << userNumber * 3 << '\n';

    return 0;
}

