#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}
int main(){
    
    int n;
    int sum = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    qsort(arr,n,sizeof(int),compare);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            sum += arr[j];
        }
    }
    printf("%d",sum);
    return 0;
}
