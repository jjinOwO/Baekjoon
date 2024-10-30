#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int n;
    scanf("%d",&n);
   
    int max = 1;
    int count = 1;
    int add = 6;
   
    while(n > max) {
        max += add;
        add += 6;
        count++;
    }
    printf("%d",count);
    return 0;
}