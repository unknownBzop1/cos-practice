#include <cstdio>

using namespace std;

int main(int argc, const char * argv[]) {

	int arr[10];

	for (int i = 0; i < 10; i++) {
		arr[i] = 10 - i;
	}

	printf("arr[0] = %d, arr[3] = %d, arr[7] = %d\n", arr[0], arr[3], arr[7]);

	return 0;
}