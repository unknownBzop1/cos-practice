#include <cstdint>
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	long a = 0x1234567890;
	int64_t b = 0x1234567890;

	printf("sizeof(a) = %lld", sizeof(a));
	printf("%ld", a);
	printf("%lld", b);
}