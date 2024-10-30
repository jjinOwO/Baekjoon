#include <stdio.h>

int main() {
    int n, m, ans = -1;
    scanf("%d %d", &n, &m);
    int arr[101];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum <= m && sum > ans) {
                    ans = sum;
                }
            }
        }
    }    
    
    printf("%d", ans);
    return 0;
}