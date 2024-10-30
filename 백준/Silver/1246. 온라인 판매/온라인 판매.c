#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return *(int *)b - *(int *)a;
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[10000] = {0,};
    for(int i = 0; i < m; i++){
        scanf("%d",&arr[i]);
    }
    
    qsort(arr,m,sizeof(int),compare);
    int max = 0;
    int price = 0;
    for(int i = 0; i < m; i++){
        if(i < n) {
            if(arr[i]*(i+1) > max){
                max = arr[i]*(i+1);
                price = i;
            }
        }
    }

    
    printf("%d %d",arr[price],max);

    return 0;
}