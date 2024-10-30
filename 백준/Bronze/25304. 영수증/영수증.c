#include <stdio.h>
int main() {
    int x, n, a, b, t;
    scanf("%d", &x);
    scanf("%d", &n);
    t = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        t = t + a * b;
    }
    if (t == x) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}