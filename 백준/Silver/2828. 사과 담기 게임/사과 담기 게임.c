#include <stdio.h>
#include <string.h>

int main(){
    
    int n,m;
    scanf("%d%d",&n,&m);
    
    int j;
    scanf("%d",&j);
    int arr[j];
    int b_s = 0;
    int b_l = m-1;
    int move = 0;
    for(int i = 0; i < j; i++) {
        scanf("%d",&arr[i]);
        arr[i]--;
        while(arr[i] > b_l) {
            b_s++;
            b_l++;
            move++;
        }
        while(arr[i] < b_s) {
            b_s--;
            b_l--;
            move++;
        }
    }

    printf("%d",move);

    return 0;
}