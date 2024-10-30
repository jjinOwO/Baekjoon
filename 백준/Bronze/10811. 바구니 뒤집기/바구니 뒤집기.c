#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int n,m;
    int arr[101] = {0,};
    scanf("%d%d",&n,&m);
    
    for(int i = 1; i <= n; i++) {
        arr[i-1] = i;
    }
    
    
    for(int i = 0; i < m; i++) {
        int a,b,tmp;
        scanf("%d%d",&a,&b);
       
        while(a < b) {
                tmp = arr[a-1];
                arr[a-1] = arr[b-1];
                arr[b-1] = tmp;
                a++;
                b--;
                
        } 
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}
