#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int main() {
    
    char arr[10];
    int num[10] = {0,};
    scanf("%s",arr);
    
    int len = strlen(arr);
    
    for(int i = 0; i < len; i++) {
            if(arr[i] == '0') num[0]++;
            else if(arr[i] == '1') num[1]++;
            else if(arr[i] == '2') num[2]++;
            else if(arr[i] == '3') num[3]++;
            else if(arr[i] == '4') num[4]++;
            else if(arr[i] == '5') num[5]++;
            else if(arr[i] == '6') num[6]++;
            else if(arr[i] == '7') num[7]++;
            else if(arr[i] == '8') num[8]++;
            else if(arr[i] == '9') num[9]++;
    }
    
    
    
    while(abs(num[6] - num[9]) > 1) {
        if(num[6] > num[9]){
            num[6]--;
            num[9]++;
        }
        else if(num[6] < num[9]) {
            num[6]++;
            num[9]--;
        }
    }
    
    qsort(num,10,sizeof(int),compare);
    printf("%d",num[0]);
 
    return 0;
}