#include <stdio.h>

int main(){
    
    int n,m;
    int arr1[101][101], arr2[101][101], sum[101][101];
    scanf("%d%d",&n,&m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d",&arr1[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d",&arr2[i][j]);
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}