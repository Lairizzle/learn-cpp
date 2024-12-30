#include "io.h"
#include <iostream>

int readNumber() {

    int x{};
    std::cout << "Please enter an integer: " << '\n';
    std::cin >> x;
    return x;
}

void writeAnswer(int ans) { std::cout << "The answer is: " << ans << '\n'; }
