#include <stdio.h>
#include <string.h>


int main(){
    
    char num[16];
    int sum = 0;
    scanf("%[^\n]s",num);
    int len = strlen(num);
    
    for(int i = 0; i < len; i++) {
        if(num[i] >= 'A' && num[i] <= 'C') sum += 3;
        else if(num[i] >= 'D' && num[i] <= 'F') sum += 4;
        else if(num[i] >= 'G' && num[i]<= 'I') sum += 5;
        else if(num[i] >= 'J' && num[i] <= 'L') sum += 6;
        else if(num[i] >= 'M' && num[i] <= 'O') sum += 7;
        else if(num[i] >= 'P' && num[i] <= 'S') sum += 8;
        else if(num[i] >= 'T' && num[i] <= 'V') sum += 9;
        else sum += 10;
    }
    printf("%d",sum);
    return 0;
}