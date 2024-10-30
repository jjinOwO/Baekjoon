#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS



int main() {
    char arr[1001] = { 0, };
    scanf("%[^\n]s", arr);

    int len = strlen(arr);
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] == 'U' && count == 0) count++;
        if (arr[i] == 'C' && count == 1) count++;
        if (arr[i] == 'P' && count == 2) count++;
        if (arr[i] == 'C' && count == 3) count++;
    }

    if (count == 4) printf("I love UCPC");
    else printf("I hate UCPC");
    return 0;
}