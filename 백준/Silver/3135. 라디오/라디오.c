#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int a,b,n;
    scanf("%d%d",&a,&b);
    scanf("%d",&n);
    int arr[n];
    int min = abs(a-b);
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
        int near = abs(b-arr[i]);
        if(near < min) min = near; //절대값 계산
    }
    if(min != abs(a-b)) min++;
    printf("%d",min);

    return 0;
}