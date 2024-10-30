#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100
int main()
{
    int n, t, v, v1;
    v1 = 0;
    scanf("%d", &n);
    int array[SIZE];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &array[i]);
    }
    scanf("%d", &v);
    for (int i = 0; i < n; i++) {
        if (array[i] == v) {
            v1++;
        }
    }
    printf("%d", v1);


    return 0;
}