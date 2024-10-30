#include <stdio.h>

int main() {
    int t, y, k, ys, ks;
    
    scanf("%d", &t);
    
    for(int j = 0; j < t; j++) {
        ys = 0;
        ks = 0;
        for(int i = 0; i < 9; i++) {
            scanf("%d %d", &y, &k);
            ys += y;
            ks += k;
        }
        if(ys > ks) 
            printf("Yonsei\n");
        else if(ks > ys) 
            printf("Korea\n");
        else 
            printf("Draw\n");
    }

    return 0;
}