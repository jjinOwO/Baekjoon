#include <stdio.h>

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    char arr[n][m];
    char b[8][8];
    char w[8][8];
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if((i%2==0 && j%2==0) || (i%2==1 && j%2==1)){
                b[i][j] = 'B';
                w[i][j] = 'W';
            }
            else if((i%2==0 && j%2==1) || (i%2==1 && j%2==0)){
                b[i][j] = 'W';
                w[i][j] = 'B';
            } 
        }    
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%c",&arr[i][j]);
            if(arr[i][j] == '\n') j--;
        }
    }

    int min = 10000;
    for(int y = 0; y <= n - 8; y++) {
        for(int x = 0; x <= m - 8; x++) {
            int count_b = 0;
            int count_w = 0;
            for(int i = 0; i < 8; i++) {
                for(int j = 0; j < 8; j++) {
                    if(arr[y + i][x + j] != b[i][j]) {
                        count_b++;
                    }
                    if(arr[y + i][x + j] != w[i][j]) {
                        count_w++;
                    }
                }
            }
            if(count_b < min) min = count_b;
            if(count_w < min) min = count_w;
        }
    }
    printf("%d",min);
    return 0;
}