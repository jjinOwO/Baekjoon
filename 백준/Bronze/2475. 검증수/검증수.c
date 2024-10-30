#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
int main() {
    int arr[5] ={0,};
    int sum = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < 5; i++) {
        arr[i] = arr[i]*arr[i];
        sum += arr[i];
    }
    printf("%d",sum%10);
    return 0;
}