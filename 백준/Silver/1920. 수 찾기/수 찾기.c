#include <stdio.h>
#include <stdlib.h>

int compare(const void* arg1, const void* arg2) {
	int a = *(int*)arg1;
	int b = *(int*)arg2;
	if (a > b) return 1;
	else if (a < b) return -1;
	else return 0;
}	

int binary(int arr[], int n, int key) {
    int low, high;
    int mid;
    
    low = 0;
    high = n-1;
    while(low <= high) {
        mid = (low + high)/2;
        if(key == arr[mid]) {
            return 1;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else if (key > arr[mid]) {
            low = mid + 1;
        }
    }
    return 0;   
        
}
 
    


int main(){
    
    int n,m;
   
    scanf("%d",&n);
    int A[100001] = {0,};
    for(int i = 0; i < n; i++) {
        scanf("%d",&A[i]);
    }
    qsort(A,n,sizeof(int),compare);
    scanf("%d",&m);
    int k[100001] = {0,};
    for(int i = 0; i < m; i++) {
        scanf("%d",&k[i]);
        
    }
    
    for(int i = 0; i < m; i++) {
        int check = binary(A, n, k[i]);
        printf("%d\n",check);
    }
    
    
    return 0;
}