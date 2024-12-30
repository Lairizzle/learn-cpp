// Duplicate definitions can cause compiler errors
// Consider the following:

// square.h
int getSquareSides() { return 4; }

// wave.h
#include "square.h"

// main.cpp
#include "square.h"
#include "wave.h"

int main() { return 0; }

// This will fail to compile because the function is being called twice.
// We should also never define a variable or function in a header file.
// When the includes run the above technically looks like this:

int getSquareSides() // from square.h
{
    return 4;
}

int getSquareSides() // from wave.h (via square.h)
{
    return 4;
}

int main() { return 0; }

// This would cause an error.
// This can be avoided with header guards or include guards

#ifndef SQUARE_H
#define SQUARE_H

int getSquareSides() { return 4; }

#endif

// The above will work with the preproccesor to check if the defined name has
// been previously defined If it has it will be ignored. Guard name conflicts
// can happen in big projects, names should be unique and complex
//
// You can also just use #pragma once at the start of a header file
