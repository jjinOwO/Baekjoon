#include <stdio.h>

int main(){
    
    int n;
    int a;
    int arr[10001] = {0,};
    scanf("%d",&n);

    for(int i = 0; i < n; i++) {

        scanf("%d",&a);
        arr[a]++;
    }
    
    for(int i = 0; i <= 10000; i++) {
        if(arr[i] == 0) continue;
        
        for(int j = 1; j <= arr[i]; j++) {
            printf("%d\n",i);
        }
    }

    return 0;
}