#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
  int a,b,c,reward;
  int max = -1;
  scanf("%d %d %d",&a,&b,&c);
  if(a > max) max = a;
  if(b > max) max = b;
  if(c > max) max = c;
  
  if (a==b && b==c) {
      reward = 10000 + (a*1000);
  }
  else if (a==b) {
      reward = 1000 + (a*100);
  }
  else if (a==c) {
      reward = 1000 + (a*100);
  }
  else if (b==c) {
      reward = 1000 + (b*100);
  }
  else reward = max * 100;
  printf("%d",reward);
  return 0;
}