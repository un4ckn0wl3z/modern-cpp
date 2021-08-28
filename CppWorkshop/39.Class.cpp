#include <iostream>
#include <string>

class MyClass {
	
	int myInt = 0;
public:
	void IncrementInt() {
		myInt++;
		std::cout << "MyClass::IncrementInt: " << myInt << std::endl;
	}

};



int main() {

	MyClass classObject;
	classObject.IncrementInt();


	return 0;
}













