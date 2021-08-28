// Bitwise Operator Examples. 
#include <iostream> 
#include <string> 
#include <bitset> 

int main()
{
    int myInt1 = 6; // 00110 when expressed in binary 
    int myInt2 = 12; // 01100 when expressed in binary 

    // Binary AND 
    std::cout << std::bitset < 5 >(myInt1 & myInt2) << std::endl;

    // Binary OR 
    std::cout << std::bitset < 5 >(myInt1 | myInt2) << std::endl;

    // Binary Ones Compliment 
    std::cout << std::bitset < 5 >(~myInt1) << std::endl;

    // Binary Left Shift Operator 
    std::cout << std::bitset < 5 >(myInt1 << 2) << std::endl;

    // Binary Right Shift Operator 
    std::cout << std::bitset < 5 >(myInt2 >> 2) << std::endl;
}