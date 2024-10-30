#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
int main() {
    int arr[8] = {0,};
    
    for(int i = 0; i < 8; i++) {
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < 8; i++) {
        int v1[8] = {1,2,3,4,5,6,7,8};
        int v2[8] = {8,7,6,5,4,3,2,1};
    int a =1, d = 1;
    for(int i = 0; i < 8; i++){
        if(arr[i] != v1[i]) {
            a = 0;
        }
        
        if(arr[i] != v2[i]) {
            d = 0;
        }    
    }
    
    
    if(a){
        printf("ascending");
    }
    else if(d){
        printf("descending");
    }
    else {
        printf("mixed");
    }
    return 0;
    }
} 