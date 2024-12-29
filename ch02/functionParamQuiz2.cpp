#include <iostream>

int doubleNumber(int x){
    return x * 2;
}

int main(){
    std::cout << "Please enter an integer: " << '\n';
    int input{};
    std::cin >> input;
    std::cout << doubleNumber(input) << '\n';
    return 0;
}
