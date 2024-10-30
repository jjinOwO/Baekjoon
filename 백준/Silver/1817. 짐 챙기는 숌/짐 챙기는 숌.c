#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int n,m;
    scanf("%d%d",&n,&m);
    int weight = 0; int ans = 0;
    for(int i = 0; i < n; i++) {
        int book;
        scanf("%d",&book);
        if(weight + book > m){
			weight = book;
			ans++;
		}
		else weight += book; 
	}
	
	if(weight > 0) ans++;
	printf("%d",ans);

    return 0;
}