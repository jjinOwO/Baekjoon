#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int count = 0;
        int a = 0;
        char vps[51];
        scanf("%s", vps);
        int len = strlen(vps);
        char check[51] = { 0, };
        for (int j = 0; j < len; j++) {
            if (vps[j] == '(') {
                check[count] = '(';
                count++;
            }
            else if (vps[j] == ')') {
                if (count > 0) {
                    check[count - 1] = 0;
                    count--;
                }
                else if (count == 0) {
                    a = 1;
                    continue;
                }
            }
        }
        int y = 0;
        for (int i = 0; i < len; i++) {
            if (check[i] == '(') y++;
        }
        if (y == 0 && a==0) printf("YES\n");
        else if(a == 1) printf("NO\n");
        else printf("NO\n");

    }
    return 0;
}