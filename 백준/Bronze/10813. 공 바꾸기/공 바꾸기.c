#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 101
int main(){
 
    int n,m,i,j;
    int arr[SIZE];
    int tmp;
    scanf("%d %d", &n,&m);
    for(int i =0; i<n; i++){
        arr[i] = i+1;
    } 
    for(int k =0; k<m; k++) {
        scanf("%d %d",&i,&j);
        tmp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = tmp;
    }
    for(int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}