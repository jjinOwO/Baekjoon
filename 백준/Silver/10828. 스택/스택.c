#include <stdio.h>
#include <string.h>
int number[100001];
int count = 0;

void push(int num) {
    number[count] = num;
    count++;
}

void pop() {
    if(count != 0) {
        count--;
        printf("%d\n",number[count]);
        number[count] = 0;
    }
    
    else printf("-1\n");
}

void size() {
    printf("%d\n",count);
}

void empty() {
    if(count == 0) printf("1\n");
    else printf("0\n");
}

void top() {
    if(count != 0) printf("%d\n",number[count-1]);
    else printf("-1\n");
}

int main() {
    
    int n;
    scanf("%d",&n);
    int number[100];
    char com[10];
    for(int i = 0; i < n; i++) {

        scanf("%s",com);
        if(strcmp(com,"push") == 0) {
            int num;
            scanf("%d",&num);
            push(num);
        }
        else if(strcmp(com,"pop") == 0) {
            pop();
        }
        else if(strcmp(com,"size") == 0) {
            size();
        }
        else if(strcmp(com,"empty") == 0) {
            empty();
        }
        else if(strcmp(com,"top") == 0) {
            top();
        }
    }
    
    
    return 0;
}