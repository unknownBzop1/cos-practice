#include <iostream>

int main(int argc, char **argv) {

	int user_input{};
	std::cout << "Input an integer: ";
	std::cin >> user_input;

	if (user_input >= 0) {
		std::cout << "This integer is positive." << std::endl;
	} else {
		std::cout << "This integer is negative." << std::endl;
	}

	return 0;

}