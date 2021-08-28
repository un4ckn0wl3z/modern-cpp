// Vector example.
#include <iostream>
#include <string>
#include <vector>

std::vector<int> myVector{1,2,3,4,5};

void PrintVector()
{
    for (int i = 0; i < myVector.size(); ++i)
    {
        std::cout << myVector[i];
    }
    std::cout << "\n\n";
}

int main()
{
    PrintVector();
}