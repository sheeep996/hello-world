#include <stdio.h>

int main(void){
	int m,n,r;
	int s; 
	s = m * n;
	while(1){
		printf("��������������");
		scanf ("%d%d",&m,&n);
		s = m* n; //�������
		while(n!=0) {
			r = m % n;
			m = n;
			n = r;
		}
		printf("������С������Ϊ��%d\n\n",s / m);
		
	}
	return 0;
}
 
