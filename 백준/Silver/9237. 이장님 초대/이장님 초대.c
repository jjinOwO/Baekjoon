#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}
int main() {

    int n;
    scanf("%d", &n);
    int max = 0;
    int tree[1000001];
    int min[1000001];
    for (int i = 0; i < n; i++){
        scanf("%d", &tree[i]);
    }
    qsort(tree,n,sizeof(int),compare);
    
    for (int i = 0; i < n; i++) {
        min[i] = (i+1) + tree[i];
    }

    qsort(min,n,sizeof(int),compare);

    printf("%d", min[0]+1);
    return 0;
}