#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
    int X;
    int stick = 64;
    int sum = 0;
    scanf("%d",&X);
    
    while(X > 0) {
        if(stick > X) {
            stick /= 2;
        }
        else {
            sum++;
            X -= stick;
        }
    }
   
    printf("%d",sum);
}
