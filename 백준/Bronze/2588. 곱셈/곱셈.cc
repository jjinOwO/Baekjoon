#include <stdio.h>

int main(void) {
	int A,B;
	scanf("%d%d", &A, &B);
	printf("%d\n", A * (B%10));
	printf("%d\n", A * (B % 100 / 10));
	printf("%d\n", A * (B / 100));

	int a = A * (B % 10);
	int b = (A * (B % 100 / 10)) * 10;
	int c = (A * (B / 100)) * 100;
	printf("%d", a + b + c);
	return 0;
}