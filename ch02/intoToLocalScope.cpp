#include <iostream>

// Variables defined inside of a function are called local Variables

int add(int x, int y) // function parameters are also generally considered local
{
    int z{x + y}; // z is a local variable
    return z;
}

// When is an instantiated variable destroyed?
// Local variables are destroyed at the end of a function

// The following will demonstrate the life of a variable named x

void doSomething() { std::cout << "Hello\n"; }

int main() {
    int x{0};      // x life begins
    doSomething(); // x is still alive
    return 0;
} // x life ends here and x can no longer be used

// An identifiers scope determins where a variable can be seen. Local scope (or
// block scope) is only useable from point of definition to end of the inner
// most curly braces
