#include <stdio.h>

int  main() {
	int numA, numB;
	numA = 1; numB = 0;


	int test;
	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		int temp = numA;
		numA = numB;
		numB = temp + numB;
	}
	printf("%d %d", numA, numB);
}