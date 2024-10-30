#include <stdio.h>
#include <string.h>

int queue[10001];
int count = 0;
int f = 0;
int rc = 0;

void check() {
    for (int i = 0; i < count; i++) {
        if (queue[i] > 0) {
            rc++;
        }
    }
}

void push(int x) {
    queue[count] = x;
    count++;
}

void pop() {
    check();
    if (rc == 0) printf("-1\n");

    else {
        printf("%d\n", queue[f]);
        queue[f] = 0;
        f++;
    }
    rc = 0;

}

void size() {
    check();
    printf("%d\n", rc);
    rc = 0;
}

void empty() {
    check();
    if (rc == 0) printf("1\n");
    else printf("0\n");
    rc = 0;
}

void front() {
    check();
    if (rc == 0) printf("-1\n");
    else printf("%d\n", queue[f]);
    rc = 0;
}

void back() {
    check();
    if (rc == 0) printf("-1\n");
    else printf("%d\n", queue[count-1]);
    rc = 0;;
}
int main() {
    int n;
    scanf("%d", &n);
    char input[10];
    int queue[10001];
    for (int i = 0; i < n; i++) {


        scanf("%s", input);
        if (strcmp(input, "push") == 0) {
            int k;
            scanf("%d", &k);
            push(k);
        }
        else if (strcmp(input, "pop") == 0) pop();
        else if (strcmp(input, "size") == 0) size();
        else if (strcmp(input, "empty") == 0) empty();
        else if (strcmp(input, "front") == 0) front();
        else if (strcmp(input, "back") == 0) back();
    }

    return 0;
}
