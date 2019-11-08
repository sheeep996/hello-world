//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
#include<stdio.h>
int main(){
	long n=100000000;

	int a[10],b[10],i;
	long x=0;
	int j,k;
	for(j=20;j<=n;j++){
		int j1=j;
		for(k=0;;k++){
		
		b[k]=j1/10;
		a[k]=j1%10;
		j1=j1/10;
		if(b[k]==0){
			break;
		}
	}
		for(i=0;i<k+1;i++){
			if(a[i]==1||(a[0]==0&&a[1]==0)){
				x++;		
			}
		}
		

		if(j==x+1){
			break;
		}
	}
	printf("%d\n",x);
}
