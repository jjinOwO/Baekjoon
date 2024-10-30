#include <stdio.h>
#include <string.h>

int main() {
    char a[4];
    char b[4];
    
    char tmp1,tmp2;
    
    scanf("%s %s",a,b);
    
    tmp1 = a[0];
    a[0] = a[2];
    a[2] = tmp1;
    
    tmp2 = b[0];
    b[0] = b[2];
    b[2] = tmp2;
    
    if(strcmp(a,b) > 0) printf("%s",a);
    else printf("%s",b);
    
    return 0;
}