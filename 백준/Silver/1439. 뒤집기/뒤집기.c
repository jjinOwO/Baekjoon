#include <stdio.h>
#include <string.h>

int main(){
    
    char arr[1000001];
    scanf("%s",arr);
    int zero = 0;
    int one = 0;
    int count = 0;
    int len = strlen(arr);
    
    for(int i = 0; i < len; i++) {
        if(arr[i] == '0'){
            while(arr[i] == '0') {
                i++;
            }
            i--;
            zero++;
        } 
        else if(arr[i] == '1'){
            while(arr[i] == '1') {
                i++;
            }
            i--;
            one++;
        }

    }
    
    if(zero <= one) printf("%d",zero);
    else printf("%d",one);

    return 0;
}