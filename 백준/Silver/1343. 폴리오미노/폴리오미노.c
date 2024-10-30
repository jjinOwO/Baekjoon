#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
    char arr[51];
    scanf("%s",arr);
    
    int count = 0;
    int len = strlen(arr);
    for(int i = 0; i < len; i++) {
        if((i+3) < len && arr[i] == 'X' && arr[i+1] == 'X' && arr[i+2] == 'X' && arr[i+3] == 'X') {
            arr[i] = 'A';
            arr[i+1] = 'A';
            arr[i+2] = 'A';
            arr[i+3] = 'A';
        }
        else if((i+1) < len && arr[i] == 'X' && arr[i+1] == 'X') {
            arr[i] = 'B';
            arr[i+1] = 'B';
        }
        continue;
    }
    
    for(int i = 0; i < len; i++) {
        if(arr[i] == 'X') {
            count = 1;
            break;
        }    
    }    

    if(count == 1) printf("-1");
    
    else {
        for(int i = 0; i < len; i++) {
            printf("%c",arr[i]);
        }
    }
    return 0;
}