#include <iostream>

using namespace std;

int main() {
	short svar;
	int ivar;
	unsigned int uvar;

	svar = 20000;
	ivar = 20000;
	uvar = 20000;

	for (int i = 0; i < 7; i++) {
		cout << svar << endl;
		cout << ivar << endl;
		cout << uvar << endl;

		svar -= 20000;
		ivar -= 20000;
		uvar -= 20000;

		cout << endl;
	}

	return 0;
}
