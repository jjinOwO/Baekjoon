#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
	
	int n;
	scanf("%d", &n);
	int arr[101];
	int count = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = n-1; i > 0; i--) {
		if (arr[i] <= arr[i - 1]) {
			while (arr[i] <= arr[i - 1]) {
				arr[i-1]--;
				count++;
			}
		}
	}
	printf("%d", count);

	return 0;
}