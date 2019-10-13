#include <stdio.h>
int main(){
	int m,n,r;
	while(1){
	printf("请输入两数：");
	scanf("%d%d",&m,&n);
	while(n!=0){
		r = m % n;
		m = n;
		n = r;
	}
	if (m == 1)
		printf("两数互质\n\n");
	else
		printf("两数不互质\n\n") ;
	}
	return 0;
}
