#include <stdio.h>
#include <string.h>
#include <math.h>


void quickSort(int a[], int L, int R){
    int left = L, right = R;
    int p = a[(L + R) / 2];
    int temp;
    do {
        while (a[left] < p) left++;
        while (a[right] > p) right--;
        if (left <= right) {
            temp = a[left];
            a[left] = a[right];
            a[right] = temp;
            left++;
            right--;
        }
    } while (left <= right);
    if (L < right) quickSort(a, L, right);
    if (left < R) quickSort(a, left, R);
}

int main() {
    
    int n;
    int arr[1000000] = { 0, };
    int tmp = 0;
    int avg;
    int sum = 0;

    scanf("%d", &n);
    avg = (int)round(n * 0.15);

    // 난이도 입력
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 오름차순 정렬
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        if (i < avg || i >= (n - avg)) continue;
        else {
            sum += arr[i];
        }
    }

    int t = n - (avg * 2);

    int result = (int)(sum * 1.0 / t + 0.5);
    if (n == 0) printf("0");

    else printf("%d", result);
    return 0;
}