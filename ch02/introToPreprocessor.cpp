// The # is used to provide preprocessor directives
// This can provide information like #include <iostream>
// Where #include is mainly used to include header files
// The # symbol is also used to create directive macros

// Example
#include <iostream>
#define IDENTIFIER
#define IDENTIFIER "Keith"

// The object-like macros above substitute text, the first one
// returns nothing and the second returns Keith

int main() {
    std::cout << "My name is: " << IDENTIFIER << '\n';
    // This would print My name is: Keith
}

// Suggestion is to avoid substition macros unless no viable alternative exists
// They mostly exist in legacy code

// Directives can also be used for conditional compilation'
// Used the most often: #ifdef, #ifndef, and #endif.

#define PRINT_JOE

int main() {
#ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
#endif

    return 0;
}

// One more common use of conditional compilation involves using
// #if 0 to exclude a block of code from being compiled (as if it were inside a
// comment block):

int main() {
    std::cout << "Joe\n";

#if 0  // Don't compile anything starting here
    std::cout << "Bob\n";
    std::cout << "Steve\n";
#endif // until this point

    return 0;
}
// This can be toggled by switching the 0 to a 1
