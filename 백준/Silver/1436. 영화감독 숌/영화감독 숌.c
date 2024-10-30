#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    scanf("%d",&x);
    int cnt = 0;
    int start = 666;
    
    while(1){
 
        int tmp = start;
        while(tmp != 0){
            if(tmp % 1000 == 666){
                cnt++;
                break;
            }
            else tmp /= 10;
        }
        
        if(cnt == x) break;
        start++;
    }
    printf("%d",start);    
    return 0;
}