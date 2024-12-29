#include <iostream>

// Take a look at this seemingly innocent code

// int main() {
//     std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
//     return 0;
// }

// int add(int x, int y) { return x + y; }

// This example does not compile because we are referencing add before it is
// declared This can be easily fixed in a small project, but in a large one you
// made need to use forward declaration

// To do this we must write a function declaration statement
// This contains the functions return type, name and parameter type

int add(int x, int y); // they do not need to provde the names only types int
                       // add(int, int) would also work

int main() {
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}

int add(int x, int y) { return x + y; }
