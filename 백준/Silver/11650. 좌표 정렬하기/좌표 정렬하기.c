#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
}point;

int compare(const void *a, const void *b) {
    point A = *(point *)a;
    point B = *(point *)b;
    if (A.x > B.x) return 1;
    else if (A.x == B.x) {
        if (A.y > B.y) return 1;
        else return -1;
    }
    return -1;
}

int main() {

    int n;
    scanf("%d", &n);
    point p[100001];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p[i].x, &p[i].y);
    }
    qsort(p, n, sizeof(point), compare);
    
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", p[i].x, p[i].y);
    }
    return 0;
}