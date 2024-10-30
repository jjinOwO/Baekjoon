#include <stdio.h>

int main(void) {
	int max = -1000000;
	int array[9] = {0};
	int k;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &array[i]);
		if (max < array[i]) {
			max = array[i];
		    k = i+1;
		}
	}
	

	printf("%d\n%d", max, k);
	return 0;
}