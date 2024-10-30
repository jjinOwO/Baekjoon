#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n % 5 == 0) printf("%d", n / 5);

    else {
        int count = 0;

        while (n > 0) {
            n -= 3;
            count++;

            if (n % 5 == 0) {
                count += n / 5;
                printf("%d", count);
                break;
            }

            else if (n == 1 || n == 2) {
                printf("-1");
                break;
            }

            else if (n == 0) {
                printf("%d", count);
                break;
            }
        }
    }
    return 0;
}