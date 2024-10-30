#include <stdio.h>
#include <string.h>

int main() {
    int o[6] = {1,1,2,2,2,8};
    int cp[6] =  { 0,};
    
    for(int i = 0; i < 6; i++) {
        scanf("%d",&cp[i]);
    }
     for(int i = 0; i < 6; i++) {
        printf("%d ",o[i]-cp[i]);
    }
    return 0;
}