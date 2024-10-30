#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++) {
        scanf("%d",&b[i]);
    }
    
    qsort(a,n,sizeof(int),compare);
    qsort(b,n,sizeof(int),compare);
    
    for(int i = 0; i < n; i++) {
        sum += a[i] * b[n-1-i];
    }
    printf("%d",sum);
    return 0;
}