#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int n, sum = 0;
    char arr[101];
    
    scanf("%d", &n);
    
    scanf("%s", arr);
    
    for (int i = 0; i < n; i++) {
        sum += arr[i] - '0';
    }
    
    printf("%d", sum);
    return 0;
}