#include <iostream>
#include <cstring>

using namespace std;

int uadd_ok(unsigned int x, unsigned int y) {
	cout << x << " " << y << endl;
	return ~x > y;
}

int tadd_ok(int a, int b) {
	const unsigned int SIGN_BIT = 0x80000000;
	return uadd_ok(((unsigned) a) ^ SIGN_BIT, (unsigned) b);
}

int main(int argc, const char *argv[]) {
	int a, b;
	unsigned x, y;

	if (argc != 3) {
		cout << "error" << endl;
		return 1;
	}

	a = strtol(argv[1], NULL, 16);
	b = strtol(argv[2], NULL, 16);
	x = (unsigned) a;
	y = (unsigned) b;

	cout << "Unsigned:" << uadd_ok(x, y) << endl;
	cout << "Signed:" << tadd_ok(a, b) << endl;

	return 0;
}