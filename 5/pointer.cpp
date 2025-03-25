#include <iostream>
#include <cstdio>

using namespace std;

#define BUFLEN 10

int main(int argc, char const *argv[]) {
	int arr[BUFLEN];
	int* p;
	int a;

	for (int i = 0; i < BUFLEN; i++) {
		arr[i] = 10 - i;
	}

	a = 5;
	p = &a;

	printf("a = %d\tp = 0x%p\n", a, p);

	*p = 10;

	printf("a = %d\tp = 0x%p\n", a, p);

	cout << "arr = " << arr << endl;

	return 0;
}
