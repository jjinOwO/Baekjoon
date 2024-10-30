#include <stdio.h>
#include <stdlib.h>

int compare(const void* arg1, const void* arg2) {
	int a = *(int*)arg1;
	int b = *(int*)arg2;
	if (a > b) return 1;
	else if (a < b) return -1;
	else return 0;
}	


int main(){
    
    int n, m;
    scanf("%d%d",&n,&m);
    int arr[5000001] = {0,};
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    
    qsort(arr,n,sizeof(int),compare);
    printf("%d",arr[m-1]);
    return 0;
}