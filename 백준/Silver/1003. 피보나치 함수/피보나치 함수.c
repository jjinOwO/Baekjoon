#include <stdio.h>

int fib[41][2] = {0,};

int main() {
    
    int n;
    fib[0][0] = 1;  
    fib[0][1] = 0; 
    fib[1][0] = 0;  
    fib[1][1] = 1;
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        int f;
        scanf("%d",&f);
        for(int j = 2; j <= f; j++) {
            fib[j][0] = fib[j-1][0] + fib[j-2][0];
            fib[j][1] = fib[j-1][1] + fib[j-2][1];
        }   
        printf("%d %d\n",fib[f][0],fib[f][1]);
    }
    return 0;
}