#include <math.h>
#include <stdio.h>
int main(){
	int a; 

	int i;
	int m[1000];
	int j=0;
	int x1,x2,x3,x4;
	int sum,sqrtsum;
	int i1;
	int i2;
	for(a=100;a<10000;a++){
		x1=a/1000;
		x2=(a-x1*1000)/100;
		x3=(a-x1*1000-x2*100)/10;
		x4=a%10;
	int a1=(int)sqrt(a);		
		for(i=2;i<=a1;i++){
			if(a%i==0)
			break;
		}
		if(i==a1+1){
			sum=x1+x2+x3+x4;
			for(i1=2;i1<sum;i1++){
				if(sum%i1==0)
				break;
			}
			if(i1==sum){
				sqrtsum=x1*x1+x2*x2+x3*x3+x4*x4;
			for(i2=2;i2<sqrtsum;i2++){
				if(sqrtsum%i2==0)
				break;
			}
			if(i2==sqrtsum)
			{
			m[j]=a;
			j++;
			}				
			}
		}
		
	}
	int i3;
	int SUM=0;
	for(i3=0;i3<j;i3++){
		printf("%d\n",m[i3]);
		SUM +=m[i3];
	}
	int avg;
	avg=SUM/j;
	printf("%d",avg);
}
