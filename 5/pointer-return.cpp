#include <iostream>

using namespace std;

#define BUFLEN 6

int main (int argc, char *argv[]) {
	char str[BUFLEN] = "cplus";

	char* p = str;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			printf("%02x ", *p++ & 0xff);
		}
		printf("\n");
	}

	return 0;
}
