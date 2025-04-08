#include <iostream>
#include <cstdlib>

using namespace std;

int mod(int a, int b) {
	return a % b + b * (a % b < 0);
}

int len(char* string) {
	int length = 0;
	for (char* cursor = string; *cursor; cursor++) {
		length++;
	}

	return length;
}

int convertToInt(const char *snum) {
	int absoluteValue = 0;
	int sign = 1;

	if (*snum == '-') {
		sign = -1;
		snum++;
	}

	for (const char* cursor = snum; *cursor; cursor++) {
		absoluteValue *= 10;
		absoluteValue += (*cursor - '0');
	}

	return sign * absoluteValue;
}

int main(int argc, const char * argv[]) {
	if (argc != 3) {
		cout << "Please insert two numbers" << endl;
		return 1;
	}

	int a = convertToInt(argv[1]);
	int b = convertToInt(argv[2]);
	cout << a << " % " << b << " = " << mod(a, b) << endl;

	return 0;
}