#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i = 0; i < t; i++) {
        int n,j;
        int box = 0;
        int m = 0;
        
        scanf("%d%d",&n,&j);
        int arr[j];
        for(int k = 0; k < j; k++) {
            int r,c;
            scanf("%d%d",&r,&c);
            arr[k] = r*c; //각 상자의 넓이 저장
        }
        qsort(arr,j,sizeof(int),compare);
        
        while(n > 0) {
            n -= arr[m];
            m++;
            box++;
        }
        printf("%d\n",box);
    }
    return 0;
}