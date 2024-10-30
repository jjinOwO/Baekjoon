#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr[1000002];
    for(int i = 0; i < n; i++){
        arr[i] = i+1;
    }
    int front = 0;
    int rear = n-1;
    while(arr[front] != arr[rear]){
        front++;
        rear++;
        arr[rear] = arr[front];
        front++;
    }
    printf("%d",arr[front]);

    return 0;
}