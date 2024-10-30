#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {
    while (1) {
        int a, b, c = 0;
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) break;
        int tmp = 0;
        int max, m1, m2 = 0;
        if(a > b && a > c) {
            max = a; m1 = b; m2 = c; 
        }
        else if(b > c && b > a) {
            max = b; m1 = a; m2 = c; 
        }
        else if(c > b && c > a) {
            max = c; m1 = a; m2 = b; 
        }
        if((max*max) == (m1*m1)+(m2*m2)) {
            printf("right\n");
        }
        else printf("wrong\n");
    }
    return 0;
}