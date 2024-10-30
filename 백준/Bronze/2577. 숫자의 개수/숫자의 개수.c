#include <stdio.h>
#include <string.h>

char arr[30];
int main() {

    int a, b, c;
    int sum = 0;
    int num[10] = {0,};
    scanf("%d %d %d", &a, &b, &c);        
    
    sum = a * b * c;

    sprintf(arr, "%d", sum);
    int len = strlen(arr);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < len; j++) {            
            if (arr[j]-48 == i) {
                num[i]++;
            }
        }        
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}