#include <stdio.h>
#include <string.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int c = a - b;
    int cp = a;

    if (a == 0) a = 1;
    else for (int i = a - 1; i > 0; i--) {
        a *= i;
    }
    if(b == 0) b = 1;
    else for (int i = b - 1; i > 0; i--) {
        b *= i; 
    }
    if (c == 0) c = 1;
    else for (int i = c - 1; i > 0; i--) {
        c *= i;
    }

    int ans = a / (b * c);
    
    printf("%d", ans);
    return 0;
}