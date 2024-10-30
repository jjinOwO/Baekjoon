#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return *(int *)b - *(int *)a;
}

int main(){
    int arr1[5];
    int sum = 0;
    int e,f;
    for(int i = 0; i < 4; i++){
        scanf("%d",&arr1[i]);
    }
    qsort(arr1,4,sizeof(int),compare);
    for(int i = 0; i < 3; i++){
        sum += arr1[i];
    }
    scanf("%d",&e);
    int max = e;
    scanf("%d",&f);
    if(f >= max) max = f;
    sum += max;
    printf("%d",sum);
    

    return 0;
}