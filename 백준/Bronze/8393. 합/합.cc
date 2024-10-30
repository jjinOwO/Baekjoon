#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for (int i = 1; i < n+1; i++) {
		cnt += i;
	}
	printf("%d", cnt);
	
	return 0;
}