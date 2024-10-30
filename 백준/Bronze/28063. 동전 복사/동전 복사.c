#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, x, y;
    scanf("%d%d%d", &n, &x, &y);
    if (n == 1) printf("0");
    else {
        if (x == 1 && y == 1 || x == n && y == n || x == 1 && y == n || x == n && y == 1) printf("2");
        else if (x == 1 || y == 1 || x == n || y == n) printf("3");
        else printf("4");
    }
    return 0;
}