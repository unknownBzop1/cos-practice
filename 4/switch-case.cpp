#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

	int x{};
	cout << "Enter a number:  ";
	cin >> x;

	switch (x) {
		case 1:
			cout << "1" << endl;
			break;
		case 2:
			cout << "2" << endl;
			break;
		case 3:
			cout << "3" << endl;
			break;
		default:
			cout << "default" << endl;
			break;
	} // python 3.10에는 match ~ case 구문이 고맙게도 존재합니다. braces? SyntaxError: not a chance

	return 0;
}
