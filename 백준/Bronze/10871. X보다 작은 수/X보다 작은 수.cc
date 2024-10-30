#include <stdio.h>

int main(void) {
	int N,X,v;
	scanf("%d%d", &N, &X);

	for (int i = 0; i < N; i++) {
		scanf("%d", &v);
		if (v < X)
			printf("%d ", v);
	}



		return 0;
}