#include <stdio.h>

int main(void) {
	int num,a,b,c;
	int cnt = 0, result = 0;
	
	scanf("%d", &num);
	
	if (num < 10) num *= 10;
	
	result = num;
	
	while (1) {
		a = result / 10;
		b = result % 10;
		c = a + b;
		result = (b * 10) + (c % 10);
		cnt++;

		if (result == num) break;
	}
	printf("%d", cnt);

	return 0;
}