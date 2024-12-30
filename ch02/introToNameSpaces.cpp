

// A namespace provdes another type of scope region
// This is called a namespace scope
// This allows you to declare names inside of it for the purpose of
// disambiguation
// Names declared in the namespace wont be mistaken for identical names in other
// scopes Anything not defined inside a class, function or namespace is
// considered to be part of the global namespace or global scope

// For example:
// std::cout used to exist as in the global scope, but to avoid conflicts
// it was added to the std (standard) namspace.
// This means that std::cout is actually just cout,  but to avoid conflicts
// We tell the compiler it is inside the namespace std

// The :: symbol is an operator called the scope resolution operator.
// The identifier to the left of the :: symbol identifies the namespace
// that the name to the right of the :: symbol is contained within.
// If no identifier to the left of the :: symbol is provided,
// the global namespace is assumed.
// So when we say std::cout we’re saying
// “the cout that is declared in namespace std“.
