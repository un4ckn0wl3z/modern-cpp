#include <iostream>
#include <string>

class MyClass
{
public:
    MyClass()
    {
        std::cout << "My Class Constructor Called\n";
        myPublicInt = 5;
    }
    int myPublicInt = 0;

    ~MyClass()
    {
        std::cout << "My Class Destructor Called\n";
    }
};

int main()
{
    std::cout << "Application started\n";
    MyClass testClass;
    std::cout << testClass.myPublicInt << "\n";
}