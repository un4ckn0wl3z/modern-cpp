// Vector example.
#include <iostream>
#include <string>
#include <vector>

int main() {

	std::vector<int> myVector{ 1,2,3,4,5 };
	std::vector<int> myVector2(3, 1); // the size of this vector is for 3 element , all default value is 1

	int myArray[5]{ 1,2,3,4,5 };

	// initialize from exising array
	std::vector<int> myVector3(myArray, myArray + std::size(myArray));

	// initialize from exising vector
	std::vector<int> myVector4(myVector2.begin(), myVector2.end());

	// add element to the end of myVector
	myVector.push_back(1);

	// remove element from the end of myVector
	myVector.pop_back();

	// remove element with erase
	myVector.erase(myVector.begin() + 1);

	// add element with insert
	myVector.insert(myVector.begin() + 2, 9);




	return 0;
}












