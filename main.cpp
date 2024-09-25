#include <iostream>

// Strings in C++ are an array of characters

int main()
{
    // Strings are immutable by default and are a fixed block of memory.
    // So you really want to make these a const if you know you aren't going to be modifying the string
    char *name = "AchroDev"; // Although this is a char * (char pointer), it is not a heap allocated value.

    std::cout << name << std::endl;

    std::cin.get();
}
