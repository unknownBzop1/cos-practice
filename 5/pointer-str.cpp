#include <iostream>

using namespace std;

#define BUFLEN 6

int main (int argc, char *argv[]) {
	char str1[BUFLEN] = "world";
	char str2[BUFLEN] = "hello";

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "str1 + 1 = " << str1 + 1 << endl;

	char* p = str2;
	*(p + 5) = ',';

	cout << "str2 = " << str2 << endl;

	return 0;
}
