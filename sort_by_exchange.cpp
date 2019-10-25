//交换排序
#include <stdio.h>
int main() {
  int x[3] = {5, 2, 1}, i,a;
  while(1) {
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
  for(a=2;i = a;a--)  {      //һ�и㶨 
  
    for(i=0;i<a;i++) {
      if( x[i] > x[i+1]) {
  	    int temp = x[i];
  	    x[i] = x[i+1];
  	    x[i+1] = temp;
      }
    }
}
    printf(" %d, %d, %d", x[0], x[1], x[2]);
  }
  return 0;
}
