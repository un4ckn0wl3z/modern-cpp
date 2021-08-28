// Input example.
#include <iostream>
#include <string>

int main()
{
    std::string inputString = "";
    int inputInt = 0;

    std::cout << "*******************" << std::endl;
    std::cout << "Ener your number to convert: ";

    getline(std::cin, inputString);
    inputInt = std::stoi(inputString);

    std::cout << "So, you input +1 is equal to: " << inputInt + 1 << std::endl;

    return 0;



}