#include <stdio.h>
#include <string.h>
int number[100001] = {0,};
int count = 0;

void push(int n) {
    number[count] = n;
    count++;
}

void pop() {
    number[count] = 0;
    count--;
}
int main(){
    int k;
    int sum = 0;
    scanf("%d",&k);
    for(int i = 0; i < k; i++) {
        int input = 0;
        scanf("%d",&input);
        if(input > 0) push(input);
        else if(input == 0 && count == 0) continue;
        else pop();
    }
    for(int i = 0; i < count; i++) {
        sum += number[i];
    }
    
    printf("%d",sum);
    return 0;
}