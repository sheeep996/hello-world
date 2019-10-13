#include <stdio.h>

int main(void){
	int m,n,r;
	int s; 
	s = m * n;
	while(1){
		printf("请输入两个数字");
		scanf ("%d%d",&m,&n);
		s = m* n; //两束求积
		while(n!=0) {
			r = m % n;
			m = n;
			n = r;
		}
		printf("两数最小公倍数为：%d\n\n",s / m);
		
	}
	return 0;
}
 
