#include <stdio.h>

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int sum = 0;
    int min = 10001;
    for(int i = m; i<=n; i++) {
        int count = 0;
        
        for(int j = 1; j <= i; j++) {
            if(i%j == 0) count++;
        }
       
        if(count == 2) {
            sum += i;
            if(i < min) min = i;    
        }    
    }
    
    
    
    if(sum == 0) printf("-1");
    
    else {
        printf("%d\n",sum);
        printf("%d",min);
    }
    return 0;
}