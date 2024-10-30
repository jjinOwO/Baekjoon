#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(){
    
    int n,l;
    scanf("%d%d",&n,&l);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    int j = 0;
    while(l >= arr[j]) {
        l++;
        j++;
        if(j == n) break;
    }
    printf("%d",l);
    return 0;
}