#include <stdio.h>
#include <stdlib.h>

int ans[500001] = {0,};

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int check(int key, int arr[], int s) {
    int low, high;
    int mid;
    low = 0;
    high = s-1;
    while(low <= high) {
        mid = (low + high)/2;
        if(key == arr[mid]) {
            return 1;
        }    
        else if(key < arr[mid]) high = mid-1;
        else if(key > arr[mid]) low = mid+1;
    }
    return -1;
}

int main() {
    
    int n,m;
    int arr1[500001];
    int arr2[500001];
    int carr2[500001];
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr1[i]);
    }
    qsort(arr1,n,sizeof(int),compare);
    scanf("%d",&m);
    for(int i = 0; i < m; i++) {
        scanf("%d",&arr2[i]);
    }
    
    for(int i = 0; i < m; i++) {
        if(check(arr2[i],arr1,n) == 1) ans[i]++;
    }
    for(int i = 0; i < m; i++) {
        printf("%d ",ans[i]);
    }
    return 0;
}