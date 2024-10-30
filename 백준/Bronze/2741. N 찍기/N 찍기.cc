#include <stdio.h>

int main(void) {
	int N;
	int k = 1;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		printf("%d\n",k);
		k++;
	}
	
	return 0;
}