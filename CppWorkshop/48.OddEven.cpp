// Arithmetic operators.
#include <iostream>
#include <string>

int main()
{
	// Determine if a number is even.
	int myInt = 10;
	bool isEven = myInt % 2 == 0;
	std::cout << isEven << "\n";


	// Print multiples of 5.
	for (int i = 0; i < 100; ++i)
	{
		if (i % 5 == 0)
		{
			std::cout << i << "\n";
		}
	}
}