/// A general approach to debugging
//
// Once a problem has been identified, debugging the problem generally consists
// of six steps:
// 1. Find the root cause of the problem (usually the line of code that’s not
// working).
// 2. Ensure you understand why the issue is occurring.
// 3. Determine how you’ll fix the issue.
// 4. Repair the issue causing the problem.
// 5. Retest to ensure the problem has been fixed.
// 6. Retest to ensure no new problems have emerged.

// Tactics
// 1. Comment out your code
//   - You can isolate certain problem parts of code by commenting them out
// 2. Validate code flow
//   - You can look at code and validate the flow, and also use debug statements
//   like std::cerr << getValue() called\n
// 3. Print values
//   - You can print certain values out to see if they are providing the
//   expected results
// 4. Printing statements is not ideal as it can clutter code, require
// modifications and introduce new bugs.

// Conditional debugging
// 1. Another method would be to use preprocessor directives to conditionally
// debug, like the example below:
//
#if 0
#include <iostream>

#define ENABLE_DEBUG // comment out to disable debugging

int getUserInput() {
#ifdef ENABLE_DEBUG
    std::cerr << "getUserInput() called\n";
#endif
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main() {
#ifdef ENABLE_DEBUG
    std::cerr << "main() called\n";
#endif
    int x{getUserInput()};
    std::cout << "You entered: " << x << '\n';

    return 0;
}
#endif
// Alternatively you can use a logger
// Example below:
#include <iostream>
#include <plog/Initializers/RollingFileInitializer.h>
#include <plog/Log.h> // Step 1: include the logger headers

int getUserInput() {
    PLOGD << "getUserInput() called"; // PLOGD is defined by the plog library

    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int startPlogging() {
    plog::init(plog::debug, "Logfile.txt"); // Step 2: initialize the logger

    PLOGD << "main() called"; // Step 3: Output to the log as if you were
                              // writing to the console

    int x{getUserInput()};
    std::cout << "You entered: " << x << '\n';

    return 0;
}
