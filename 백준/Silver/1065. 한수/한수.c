#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int count = 0;
int check(int x) {
    if (x >= 100 && x <= 999) {
        int a, b, c;
        a = x / 100;
        x %= 100;
        b = x / 10;
        c = x % 10;
        if (a - b == b - c) {
            count++;
        }
    }

    else if (x <= 99) {
        count++;
    }

    return 0;
};


int main() {
    int n;
   
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        check(i);
       
    }
    printf("%d", count);

    return 0;
}
