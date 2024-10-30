#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    
    int n;
    int k=1;
    scanf("%d",&n);
   
   
    if(n == 0) {
        k = 1;
    }
    
    else if(n >= 1 && n <= 12) {
        for(int i = 1; i <= n; i++){
            k *= i;
        }
    }    
    
    printf("%d",k);
    
    
    return 0;
}