// Relational operators. Equality.
#include <iostream>
#include <string>

int main()
{
    int myInt1 = 1;
    int myInt2 = 1;
    int myInt3 = 5;

    if (myInt1 > myInt2)
    {
        std::cout << myInt1 << " is greater than" << myInt2 << ".\n";
    }

    if (myInt1 < myInt3)
    {
        std::cout << myInt1 << " is less than " << myInt3 << ".\n";
    }

    if (myInt3 >= myInt2)
    {
        std::cout << myInt3 << " is greater than or equal to " << myInt2 << ".\n";
    }

    if (myInt2 <= myInt1)
    {
        std::cout << myInt2 << " is less than or equal to " << myInt1;
    }
}