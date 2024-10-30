#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(){
    
    int p,n;
    int count = 0;
    scanf("%d%d",&p,&n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    
    for(int i = 0; i < n; i++) {
        if(p < 200) {
            p += arr[i];
            count++;
        }
    }
    printf("%d",count);
    return 0;
}