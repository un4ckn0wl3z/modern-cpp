#include<iostream>
using namespace std;

int main() {

	int customerAges1[5] = { 1, 2, 3, 4, 5 };
	int customerAges2[] = { 1, 2, 3, 4, 5 };
	int customerAges3[5] = { 1, 2, 3 }; // 1,2,3,0,0
	int customerAges4[5] = {}; // 0,0,0,0,0


	std::cout << customerAges3[0] << std::endl;
	std::cout << customerAges3[1] << std::endl;
	std::cout << customerAges3[2] << std::endl;
	std::cout << customerAges3[3] << std::endl;
	std::cout << customerAges3[4] << std::endl;


	return 0;
}