#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

	int arg1{}, arg2{};
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	if (arg1 <= arg2) {
		int argSum = (arg1 + arg2) * (arg2 - arg1 + 1) / 2; // no integer truncations please
		std::cout << argSum << std::endl;
	} else {
		std::cout << "Nah⋯" << std::endl;
	}

	return 0;

}