#include <stdio.h>

int main(void) {
	int A, B;
	scanf("%d%d", &A,&B);
	if (A > 0 && B > 0)
		printf("1");
	
	else if (A < 0 && B > 0)
		printf("2");

	else if (A < 0 && B < 0)
		printf("3");
	
	else
		printf("4");
	
	return 0;
}