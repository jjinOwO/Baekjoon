#include <stdio.h>
#include <stdlib.h>



int main(){
    int n;
    int count = 0;
    scanf("%d",&n);
    int dp[n];
    dp[0] = 1;
    dp[1] = 3;
    for(int i = 2; i < n; i++) {
        dp[i] = (dp[i-1] + dp[i-2]*2)%10007;
    }
    printf("%d",dp[n-1]);
    return 0;
}