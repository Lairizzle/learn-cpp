#include <iostream>

int doubleNumber(int x){
    return x * 2;
}

void userInput(){
    std::cout << "Please enter and integer: ";
    int input{};
    std::cin >> input;
    std::cout << doubleNumber(input) << '\n';
}

int main(){
    userInput();
    return 0;
}
