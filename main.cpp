#include <iostream>
#include <string> // Notice that the string header file is needed to be included

// Strings in C++ are an array of characters

int main()
{
    // Strings are immutable by default and are a fixed block of memory.
    // So you really want to make these a const if you know you aren't going to be modifying the string
    // const char *name = "AchroDev";                            // Although this is a char * (char pointer), it is not a heap allocated value.
    // char name2[8] = {'A', 'c', 'h', 'r', 'o', 'D', 'e', 'v'}; // Manually created a char array (string)
    // std::cout << name << std::endl;

    std::string name = "AchroDev" + " hello!"; // You can't just append/add another string like this as you are essentially trying to add 2 const char arrays
    name += " hello";                          // This is how you can actually append/add another string to a string
    std::cout << name << std::endl;

    std::cin.get();
}
