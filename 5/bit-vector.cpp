#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <bits/version.h>

#define BIT_VECTOR_LENGTH 4
#define MSB_INDEX (BIT_VECTOR_LENGTH - 1)
#define LSB_INDEX 0


int checkValidity(const char* input) {
	int len = static_cast<int>(strlen(input));
	if (len != BIT_VECTOR_LENGTH) {
		return 0;
	}

	for (int i = 0; i < BIT_VECTOR_LENGTH; i++) {
		if (!(input[i] == '0' || input[i] == '1')) {
			return 0;
		}
	}

	return 1;
}


void initializeBitVector(const char* input, char* bv) {
	for (int i = 0; i < BIT_VECTOR_LENGTH; i++) {
		bv[i] = static_cast<char>(input[MSB_INDEX - i] == '1');
	}
}


void printBitVector(const char* bv) {
	for (int i = MSB_INDEX; i >= LSB_INDEX; i--) {
		printf("%d", bv[i]);
	}
}


unsigned int b2u(const char* bv) {
	unsigned int result = 0;
	for (int i = 0; i <= MSB_INDEX; i++) {
		result |= bv[i] << i;
	}

	return result;
}


int b2s(const char* bv) {
	int result = 0;
	for (int i = 0; i < MSB_INDEX; i++) {
		result |= bv[i] << i;
	}

	return bv[MSB_INDEX] ? -result : result;
}


int b2o(const char* bv) {
	int result = 0;
	for (int i = 0; i < MSB_INDEX; i++) {
		result |= (bv[i] ^ bv[MSB_INDEX]) << i;
	}

	return bv[MSB_INDEX] ? -result : result;
}


int b2t(const char* bv) {
	int result = 0;
	for (int i = 0; i <= MSB_INDEX; i++) {
		result |= bv[i] << i * (i == MSB_INDEX ? -1 : 1);
	}

	return result;
}


void addBit(char bit1, char bit2, char* result, char* carry) {
	*result = static_cast<char>(bit1 ^ bit2);
	*carry |= static_cast<char>(bit1 & bit2);
}


void addBitVector(char* bv1, char* bv2, char* result) {
	char carry[BIT_VECTOR_LENGTH + 1] = {0, };

	for (int i = 0; i < BIT_VECTOR_LENGTH; i++) {
		addBit(bv1[i], bv2[i], result + i, carry + i + 1);
		addBit(result[i], carry[i], result + i, carry + i + 1);
	}
}


char* addUnsignedBitVector(char* bv1, char* bv2) {
	char* result = new char[BIT_VECTOR_LENGTH];
	memset(result, 0, BIT_VECTOR_LENGTH);
	addBitVector(bv1, bv2, result);

	return result;
}


int main(int argc, const char* argv[]) {
	char bv1[BIT_VECTOR_LENGTH];
	char bv2[BIT_VECTOR_LENGTH];

	if (argc != 3) {
		printf("invalid number of arguments\n");
		return 1;
	}

	if (!(checkValidity(argv[1]) && checkValidity(argv[2]))) {
		printf("invalid arguments\n");
		return 1;
	}

	initializeBitVector(argv[1], bv1);
	initializeBitVector(argv[2], bv2);

	printBitVector(bv1);
	printBitVector(bv2);

	return 0;
}