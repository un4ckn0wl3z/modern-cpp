#include <iostream>

#define WIN_64

int main()
{
#ifdef WIN_64
		std::cout << "We're on Windows";
#else
#ifdef OSX
	std::cout << "We're on Mac";
#endif
#endif
}