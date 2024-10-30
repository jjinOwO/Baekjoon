#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    
    int arr[10] = {0};

    int k = 0;
    for(int i = 0; i < 10; i++) {
        scanf("%d",&arr[i]);
        arr[i] %= 42;
    }
    
    for(int i = 0; i < 10; i++) {
        int a = 0;
        for(int j = i+1; j<10; j++) {
            if(arr[i] == arr[j]) a++;
        }
        if(a == 0) k++;
    }
    
    printf("%d",k);

    
    return 0;
}