#include <stdio.h>
#include <string.h>



int main() {
    
    char n[101] = {0,};
    char ans[26] = {0,};
    int c[26] = {0, };

    for(int i = 0; i < 26; i++) {
        ans[i] = (char)(i+97);
        c[i] = -1;
    }

    scanf("%[^\n]s",n);
    int len = strlen(n);
    
    for(int i = 0; i < 26; i++) {
        int cnt = 0;
        for(int j = 0; j < len; j++) {

            if(cnt > 0) continue;
            else if(n[j] == ans[i]){
                c[i] = j;
                cnt++; 
            }
        }
    }
    for(int i = 0; i < 26; i++) {
       printf("%d ",c[i]);
    }
    return 0;
}