#include <stdio.h>


int main() {
    int n;
    int t = 0;
    scanf("%d",&n);
    
    while(n > 0) {
        if(n >= 3) {
            n -= 3;
            t++;
        }
        
        else {
            n -= 1;
            t++;
        }
    }
    
    if(t%2 == 0) printf("SK");
    else printf("CY");
    return 0;
}