#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

	if (argc != 3) {
		cout << "not enough arguments." << endl;
		return 1;
	}

	int arg1 = atoi(argv[1]);
	int arg2 = atoi(argv[2]);

	if (arg1 > arg2) {
		cout << "arg1 is greater than arg2" << endl;
		return 1;
	}

	int argSum = (arg1 + arg2) * (arg2 - arg1 + 1) / 2; // too lazy to code using for-loop
	std::cout << argSum << std::endl;

	return 0;
}
