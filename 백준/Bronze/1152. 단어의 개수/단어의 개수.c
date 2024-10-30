#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
char arr[1000001];
int main(void) {
    
    int n=0;

    scanf("%[^\n]s", arr);
    
    int len = strlen(arr);
    int last = len-1;
    
    for(int i = 0; i < len; i++) {
        if(arr[i] == ' ') {
           n++; 
        }
    }
    if(arr[0] != ' ' && arr[last] != ' '){
        printf("%d",n+1);
    }
    
    else if(arr[0] == ' ' && arr[last] == ' ') {
        printf("%d",n-1);
    }
    
    else if(arr[0] == ' ' || arr[last] == ' ') {
        printf("%d",n);
    }
    return 0;
}