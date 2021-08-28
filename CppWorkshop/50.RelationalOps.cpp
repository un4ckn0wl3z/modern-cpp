// Relational operators. Equality.
#include <iostream>
#include <string>

int main()
{
    int myInt1 = 1;
    int myInt2 = 1;
    int myInt3 = 5;

    if (myInt1 == myInt2)
    {
        std::cout << myInt1 << " is equal to " << myInt2 << ".\n";
    }

    if (myInt1 != myInt3)
    {
        std::cout << myInt1 << " is not equal to " << myInt3;
    }
}