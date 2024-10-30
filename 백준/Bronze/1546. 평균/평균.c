#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int n;
    int arr[1001] ={0,};
    float avr[1001]={0,};
    int max = 0;
    float sum = 0;
    scanf("%d",&n);
   
   
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);    
    }

        
    for(int i = 0; i < n; i++) {
        if(max <= arr[i]) {
            max = arr[i];
        }
    }
    
    for(int i = 0; i < n; i++) {
        avr[i] = (float)arr[i]/max*100;
    }
    
    for(int i = 0; i < n; i++) {
        sum += avr[i];
    }
    
    printf("%f",sum/n);
    
    return 0;
}