#include <stdio.h>
#include <string.h>
int main()
{
    char arr[101];
    
    scanf("%[^\n]s",arr);
    int len = strlen(arr);
    int last = len-1;
    int t = 0;
    for(int i = 0; i < (len/2); i++) {
        if(arr[i] == arr[last]) t++;
        
        last--;
    }
    if(t < len/2) printf("0");
    else printf("1");
    return 0;
}