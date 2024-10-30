#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
    int age;
    int order;
    char name[101];

}point;

int compare(const void *a, const void *b) {
    point A = *(point *)a;
    point B = *(point *)b;
    if (A.age > B.age) return 1;
    else if (A.age == B.age) {
        if (A.order > B.order) return 1;
        else return -1;
    }
    return -1;
}

int main() {

    int n;
    scanf("%d",&n);
    point *p = (point *)malloc(n * sizeof(point));
   
    for (int i = 0; i < n; i++) {
        scanf("%d %[^\n]s", &p[i].age, p[i].name);
        p[i].order = i;
    }
    qsort(p, n, sizeof(point), compare);
    
    for (int i = 0; i < n; i++) {
        printf("%d %s\n", p[i].age, p[i].name);
    }
    free(p);
    return 0;
}