#include <stdio.h>

int main(void) {
	int N;
	int k = 0;
	scanf("%d", &N);
	k = N;
	
	for (int i = 0; i < N; i++) {
		printf("%d\n",k);
		k--;
	}
	
	return 0;
}