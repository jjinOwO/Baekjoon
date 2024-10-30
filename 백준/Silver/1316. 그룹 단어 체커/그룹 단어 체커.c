#include <stdio.h>
#include <string.h>


int main() {
    int n,tmp;
    scanf("%d",&n);   
    int d = 0;
    for(int i = 0; i < n; i++) {
        char w[101];
        int c = 0;
        scanf("%s", w);
        int len = strlen(w);
        int count[sizeof(w)] = {0,};
        for(int i = 0; i < len; i++) {
            for(int j = 0; j < 26; j++) {
                if((int)w[i] == 97+j) count[i] = 97+j;
            }    
        }
        for(int i = 0; i < len; i++) {

            
            for(int j = i+1; j < len; j++) {
                 
                if(count[i] == count[j] && i != j && count[j-1] != count[j]) {
                    if(j-i > 1 || j-1 < -1) c++;
                }

            }
        }
        if(c == 0) d++;
    }
    printf("%d",d);

    return 0;
}