#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int n,k;
    int count = 0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    
    for(int i = n-1; i >= 0; i--) {
        while(arr[i] <= k) {
            k -= arr[i];
            count++;
        }
    }
    printf("%d",count);
    return 0;
}