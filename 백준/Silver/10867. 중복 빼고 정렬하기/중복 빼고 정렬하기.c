#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int main() {

    int n;
    scanf("%d", &n);
    int arr[100001] = { 0, };
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);

    for (int i = 0; i < n; i++) {
        if (i != 0 && arr[i] == arr[i - 1]) arr[i - 1] = -1001;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] != -1001) printf("%d ",arr[i]);
    }

    return 0;
}