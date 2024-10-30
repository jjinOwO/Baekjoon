#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int farm[51][51] = {0,};
int n,m,k;  
int check(int x, int y) {
    farm [y][x] = 0;
    if(farm[y][x+1] == 1 && x+1 < m) check(x+1,y);
    
    if(farm[y][x-1] == 1 && x-1 >= 0) check(x-1,y);
    
    if(farm[y+1][x] == 1 && y+1 < n) check(x,y+1);
    
    if(farm[y-1][x] == 1 && y-1 >= 0) check(x,y-1);
    
    return 0;
}

int main() {
    
    int T;
    scanf("%d",&T);


    for(int i = 0; i < T; i++){ //테스트케이스

        scanf("%d%d%d",&m,&n,&k);
        int count = 0;

        for(int j = 0; j < k; j++) {
            int x,y;
            scanf("%d%d",&x,&y);
            farm[y][x] = 1;
        }
        
        
        for(int p = 0; p < n; p++) {
            for(int q = 0; q < m; q++) {
                if(farm[p][q] == 1) {
                    check(q,p);
                    count++;
                }
            }
        } 
        printf("%d\n",count);
    }

    return 0;
}