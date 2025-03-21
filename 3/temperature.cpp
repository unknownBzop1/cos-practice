#include <iostream>

int main(int argc, char *argv[]) {
	int fahr, celsius;
	int lower, upper, step;

	lower = atoi(argv[1]);
	upper = atoi(argv[2]);
	step = atoi(argv[3]);

	fahr = lower; // no semicolons
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9; // 'Celcius' is capitalized
		std::cout << "fahr: " << fahr << "\tcelsius: " << celsius << std::endl; // should be "std::endl" or use namespace std
		fahr += step;
	}

	return 0;
}
