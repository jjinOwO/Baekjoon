#include <stdio.h>

int main() {

    int w[51] = {0,};
    int h[51] = {0,};
    int n;
    scanf("%d",&n);
    int ans[51] = {0,};
    for(int i = 0; i < n; i++) {
        scanf("%d %d",&w[i],&h[i]);
    }
    
    for(int i = 0; i < n; i++) {
        ans[i] = 1;
        for(int j = 0; j < n; j++){
            if(w[i] < w[j] && h[i] < h[j]) ans[i]++;
            
        }
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d ",ans[i]);
    }
    return 0;
}