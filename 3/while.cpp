#include <iostream>

using namespace std;

int main() {
	short svar;
	int ivar;
	unsigned int uvar;

	svar = 20000;
	ivar = 20000;
	uvar = 20000;

	int i = 0;
	while (i < 7) {
		cout << svar << endl;
		cout << ivar << endl;
		cout << uvar << endl;

		svar -= 20000;
		ivar -= 20000;
		uvar -= 20000;

		cout << endl;
		i++;
	}

	return 0;
}
