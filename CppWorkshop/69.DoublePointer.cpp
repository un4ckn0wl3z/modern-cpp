#include <iostream>
using namespace std;

int main()
{

	
	int data = 50;
	int* ptr;

	ptr = &data;

	cout << "Value in *ptr " << *ptr << endl;

	int** double_pointer;
	double_pointer = &ptr;

	cout << "Value in **double_pointer " << **double_pointer << endl;

	cout << "Value in *double_pointer " << *double_pointer << endl;

	cout << "Value in ptr " << ptr << endl;





	return 0;
}