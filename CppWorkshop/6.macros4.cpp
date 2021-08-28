// Macro example 4 – Ifdef macro.
#include <iostream>
#include <string>
#define HELLO_WORLD "Hello World!"

int main()
{
#ifdef HELLO_WORLD
    std::cout << HELLO_WORLD;
#endif
#undef HELLO_WORLD
#ifdef HELLO_WORLD
    std::cout << HELLO_WORLD;
#endif
}