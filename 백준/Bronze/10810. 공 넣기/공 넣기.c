#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100
int main()
{
    int n, m, i, j, k;
    scanf("%d %d", &n, &m);
    int array[SIZE] = { 0, };
    for (int q = 0; q < m; q++) {
        scanf("%d %d %d", &i, &j, &k);
        for (int a = i; a <= j; a++) {
            array[a] = k;
            
        }

    }
    for (int z = 1; z <= n; z++) {
        printf("%d ", array[z]);
    }
    return 0;
}