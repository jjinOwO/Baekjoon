#include <stdio.h>
#include <string.h>
char stack[102];
int count = 0;
int a = 0;
void push(char c) {
    stack[count] = c;
    count++;
}
void pop(char k) {
    if (count > 0) {
        if (k == ']' && stack[count - 1] == '[') {
            stack[count - 1] = 0;
            count--;
        }
        else if (k == ')' && stack[count - 1] == '(') {
            stack[count - 1] = 0;
            count--;
        }
        else a++;
    }
    else a++;
}
void check() {

    if (count > 0 || a > 0) {
        printf("no\n");
    }
    else {
        printf("yes\n");
    }

    count = 0;
    memset(stack,0,sizeof(stack));
    a = 0;
}
int main() {
    while (1) {
        char str[102];
        scanf("%[^\n]s", str);
        getchar();
        int slen = strlen(str);
        if (slen == 1 && str[0] == '.') return 0;

        else {
            for (int i = 0; i < slen; i++) {
                if (str[i] == '(' || str[i] == '[') push(str[i]);
                else if (str[i] == ')' || str[i] == ']') pop(str[i]);
            }
            check();

        }
    }

    return 0;
}