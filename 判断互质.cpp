#include <stdio.h>
int main(){
	int m,n,r;
	while(1){
	printf("������������");
	scanf("%d%d",&m,&n);
	while(n!=0){
		r = m % n;
		m = n;
		n = r;
	}
	if (m == 1)
		printf("��������\n\n");
	else
		printf("����������\n\n") ;
	}
	return 0;
}
