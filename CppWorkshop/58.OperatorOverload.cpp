// Operator Overloading Example
#include <iostream>    
#include <string>    

class MyClass
{
public:
    void operator + (MyClass const& other)
    {
        std::cout << "Overloaded Operator Called" << std::endl;
        return;
    }
};

int main()
{
    MyClass A = MyClass();
    MyClass B = MyClass();
    A + B;
}