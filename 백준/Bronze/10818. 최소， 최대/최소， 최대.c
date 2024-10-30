#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
  int n;
  int min = 1000001;
  int max = -1000001;
  
  scanf("%d",&n);
  for(int i = 0; i < n; i++){
      int a;
      scanf("%d",&a);
      if(a > max) max = a;
      if(a < min) min = a;
  }
  printf("%d %d",min, max);
  return 0;
}