//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
#include <stdio.h>
int main(){
	//long x[1000000];
	//memset(x,0,1000000);
	long x[100000]={0};
	long i;
	int i0,i1,i2,i3,i4,i5;
	for(i=2;i<1000000;i++){
		i5=i%10;
		i4=(i%100-i5)/10;
		i3=(i%1000-i5-i4*10)/100;
		i0=i/100000;
		i1=(i-i0*100000)/10000;
		i2=(i-i0*100000-i1*10000)/1000;
		if(i5==1){
			x[i]++;
		}
		if(i4==1){
			x[i]++;
		}
		if(i3==1){
			x[i]++;
		}
		if(i2==1){
			x[i]++;
		}
		if(i1==1){
			x[i]++;
		}
		if(i0==1){
			x[i]++;
		}										
	}
	long sum=0;
	for(i=2;i<1000000;i++){
		sum+=x[i];
		if(sum==i){
			break;
		}
	}
	printf("%d",sum);
} 
