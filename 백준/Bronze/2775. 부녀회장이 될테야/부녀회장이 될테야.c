#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>

int main() {
    
    
    
    int apt[15][15] = {0,};
    for(int i = 0; i < 15; i++) {
        apt[0][i] = i;
    }
    for(int i = 1; i < 15; i++) {
        for(int j = 1; j < 15; j++) {
            apt[i][j] = apt[i-1][j] + apt[i][j-1];
        }
    }
    
    int k=1;
    int a,b = 1;
    scanf("%d",&k);
    for(int i = 0; i < k; i++) {
        scanf("%d %d",&a,&b);
        printf("%d\n",apt[a][b]);
    }
    
    
    return 0;
}