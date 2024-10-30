#include <stdio.h>
#include <string.h>

int main(){
    
    int arr[9];
    int sum = 0;
    
    for(int i = 0; i < 9; i++) {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    for(int i = 0; i < 9; i++) {
        for(int j = i+1; j < 9; j++) {
            if(sum - arr[i] - arr[j] == 100) {
                arr[i] = -1;
                arr[j] = -1;
            }
        }
        if(arr[i] == -1) break;
    }
    
    for(int i = 0; i < 9; i++) {
        for(int j = i+1; j < 9; j++) {
            if(arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for(int i = 2; i < 9; i++) {
       printf("%d\n",arr[i]); 
    }
    
    return 0;
}