#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    char arr[105][105]; 
    int rowlu,collu,rowrd,colrd;
    int rl,cl,rr,cr;

    for (int i = 0; i < n; i++) {
        for(int j = 0; j< m; j++) {
            scanf(" %c", &arr[i][j]);
            if(arr[i][j] == '\n') j--;//배열생성
        }

    }

    for (int i = 0; i < n; i++) {
        for(int j = 0; j< m; j++) {
           if(arr[i][j] == '#') {
               rowlu = i;
               collu = j;
               i = n;
               j = m; //왼쪽위좌표체크
           }
        }
    }
    for (int i = n-1; i >= 0; i--) {
        for(int j = m-1; j >= 0; j--) {
           if(arr[i][j] == '#') {
               rowrd = i;
               colrd = j;
               i = -1;
               j = -1; //오른쪽아래좌표체크
           }
        }
    }
    int d = ((colrd - collu)+1)/2;
    if(arr[rowlu][collu+d] == '.') printf("UP");
    else if(arr[rowlu+d][collu] == '.') printf("LEFT");
    else if(arr[rowrd][colrd-d] == '.') printf("DOWN");
    else if(arr[rowrd-d][colrd] == '.') printf("RIGHT");

    return 0;
}