#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}
int main(void) {

    int k;
    while(scanf("%d",&k) != EOF){
            
            int count = 0;
            int arr[3001] = {0,};
            int jj[3001] = {0,};
            for(int i = 0; i < k; i++){
                scanf("%d",&arr[i]);
            }
            for(int i = 0; i < k-1; i++){
                jj[i] = abs(arr[i] - arr[i+1]);
            }
            
            qsort(jj,k-1,sizeof(int),compare);
            
            for(int i = 0; i < k-1; i++){
                if(jj[i] != i+1){
                    count++;
                }
            }
            if(count == 0) printf("Jolly\n");
            else printf("Not jolly\n");
            
            
    }

    return 0;
}