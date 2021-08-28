#include <iostream>
#include <string>

#define NAME_COUNT 5

int main() {

	std::string names[NAME_COUNT];
	
	std::cout << "Please input usernames." << std::endl;
	for (int i = 0; i < NAME_COUNT; i++) {
		std::cout << "User " << i + 1 << ": ";
		std::getline(std::cin, names[i]);
	}

	bool bIsRunning = true;
	while (bIsRunning)
	{
		int userIndex = 0;
		std::string userInput = "";
		std::cout << "Enter user-id of user to fetch or -1 to quit: ";
		std::getline(std::cin, userInput);
		userIndex = std::stoi(userInput);
		if (userIndex == -1) {
			bIsRunning = false;
		}
		else {
			if (userIndex >= 0 && userIndex < NAME_COUNT) {
				std::cout << "User " << userIndex << " = " << names[userIndex] << std::endl;
			}
			else {
				std::cout << "Invalid user index" << std::endl;
			}
		}
	}

	return 0;
}