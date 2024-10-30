int main(){
    
    int n;
    scanf("%d",&n);
    int arr[n];
    int max = 0;
    int count = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
        if(i != 0 && arr[i] >= max) max = arr[i];
    }
    
    while(arr[0] <= max) {
        for(int i = 1; i < n; i++) {
            if(max == arr[i]) {
                arr[i]--;
                count++;
                arr[0]++;
                i = n;
            }
        }
        max = 0;
        for(int i = 1; i < n; i++) {
            if(arr[i] >= max) max = arr[i];
        }
    }
    printf("%d",count);
    return 0;
}