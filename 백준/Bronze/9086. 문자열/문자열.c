#include <stdio.h>
#include <string.h>
int main() {
    char arr[1001];
    int n;
    
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++) {
    int last;
    scanf("%s",arr);
    printf("%c",arr[0]);
    last = strlen(arr);
    printf("%c\n",arr[last-1]);
    }
    
    return 0;
}