#include <iostream>
#include <cstdio>

using namespace std;

#define BUFLEN 10

int main(int argc, char const *argv[]) {
	int arr[BUFLEN];

	for (int i = 0; i < BUFLEN; i++) {
		arr[i] = 10 - i;
	}

	printf("arr[2] = %d, arr + 2 = %p, *(arr + 2) = %d", arr[2], arr + 2, *(arr + 2));

	return 0;
}
