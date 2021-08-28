#include <iostream>

using namespace std;

int main()
{
    std::cout << "Loop Starting ...\n";
    int count = 1; // init
    while (count <= 5) // condition
    {
        std::cout << "\n" << count;
        if (count == 2)
            break;
        ++count; // increment
    }
    std::cout << "\n\nLoop fnished.";

    return 0;
}