#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int s[51];
    int o[51];
    for(int i = 0; i < m; i++) {
        scanf("%d%d",&s[i],&o[i]);
    }
    
    qsort(s,m,sizeof(int),compare);
    qsort(o,m,sizeof(int),compare);

    if(s[0] < 6*o[0]) {
        if(s[0] < (n%6)*o[0]) printf("%d",(n/6)*s[0]+s[0]);
        else {
            printf("%d",(n/6)*s[0]+(n%6)*o[0]);
        }
    }    
    else if(s[0]>=o[0]*6) printf("%d",n*o[0]);
    return 0;
}