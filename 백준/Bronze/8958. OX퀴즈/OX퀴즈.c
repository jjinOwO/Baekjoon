#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
int main() {
    int n;    
    scanf("%d", &n);
    
   

    for (int i = 0; i < n; i++) {
        
        int sum = 0;
        int score = 0;
        char ox[81];
        int arr[81] = { 0, };
        scanf("%s", ox);
        int len = strlen(ox);
        for (int j = 0; j < len; j++) {
            if (ox[j] == 'O') {
                score++;
                sum += score;
            }
            else score = 0;
        }

        printf("%d\n", sum);

    }
    return 0;
}