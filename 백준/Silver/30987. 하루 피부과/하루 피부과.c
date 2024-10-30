#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int a, b, c, d, e;
int x1, x2;
int integral(int x) {
    return a * (x * x * x) / 3 + (b - d) * (x * x) / 2 + (c - e) * x;
}

int main() {

    scanf("%d%d", &x1, &x2);
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    
    printf("%d", integral(x2) - integral(x1));


    return 0;
}