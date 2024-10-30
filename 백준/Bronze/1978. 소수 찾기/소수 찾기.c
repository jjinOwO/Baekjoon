#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int pn = 0;
    for(int i = 0; i < n; i++) {
        int num;
        int count = 0;
        scanf("%d",&num);
        for(int j = 1; j <= num; j++) {
            if(num%j == 0) count++;
        }
        if(count == 2) pn++;
    }
    printf("%d",pn);
    return 0;
}