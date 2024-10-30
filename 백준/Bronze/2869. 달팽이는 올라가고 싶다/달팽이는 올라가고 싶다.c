#include <stdio.h>

int main()
{
    long long int a,b,v;//a=올,b=내,v=높
    int d = 0;
    scanf("%lld%lld%lld",&a,&b,&v);
    
    d = (v-b-1) / (a-b) + 1;
    
    printf("%d",d);
    return 0;
}