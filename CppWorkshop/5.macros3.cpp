// Macro example 3 – Undefined macro.
#include <iostream>
#include <string>
#define HELLO_WORLD "Hello World!"

int main()
{
    std::cout << HELLO_WORLD;
#undef HELLO_WORLD
    std::cout << HELLO_WORLD;
}