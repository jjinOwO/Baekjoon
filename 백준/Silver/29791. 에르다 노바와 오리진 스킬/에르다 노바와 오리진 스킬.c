#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    
    int n,m;
    scanf("%d%d",&n,&m);
    int nova[n];
    int origin[m];
    int nc = 0;
    int oc = 0;
    int nt = 0;
    int ot = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d",&nova[i]);
    }
    for(int i = 0; i < m; i++) {
        scanf("%d",&origin[i]);
    }
    qsort(nova,n,sizeof(int),compare);
    qsort(origin,m,sizeof(int),compare);
    for(int i = 0; i < n; i++) {
        if(nt == 0 || nova[i] - nt >= 100) {
            nt = nova[i];
            nc++;
        }
    }
    
    for(int i = 0; i < m; i++) {
        if(ot == 0 || origin[i] - ot >= 360) {
            ot = origin[i];
            oc++;
        }
    }
    
    printf("%d %d",nc,oc);
    return 0;
}