#include <stdio.h>
#include <string.h>
int main() {
    char arr[100000];
    while(1){
        int len;
        scanf("%s",arr);

        len = strlen(arr);
        int last = len-1;
        if(arr[0] == '0') {
           break;
        }   
        
        else if(arr[0] == arr[last] && arr[1] == arr[last-1]) {
            printf("yes\n");
        }
        
        else printf("no\n");

    }
    
    return 0;
}