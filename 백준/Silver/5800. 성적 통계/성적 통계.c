#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int main() {
    
    int k;
    scanf("%d",&k);
    
    for(int i = 0; i < k; i++) {
        int classnum = i+1;
        int arr[51];
        int snum;
        int min, max;
        int lgg = -1;
        scanf("%d",&snum);
        for(int j = 0; j < snum; j++) {
            scanf("%d",&arr[j]);
        }
        qsort(arr,snum,sizeof(int),compare);
        
        for(int j = 0; j < snum-1; j++) {
            if(arr[j]-arr[j+1] > lgg) lgg = arr[j]-arr[j+1];
        }
        
        printf("Class %d\n",classnum);
        printf("Max %d, Min %d, Largest gap %d\n",arr[0],arr[snum-1],lgg);
        
    }
    
    return 0;
}