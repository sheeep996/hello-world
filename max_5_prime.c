//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//素数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位素数输出。如果不存在5位素数，则输出ERROR。
#include<stdio.h>
#include<math.h>


 	int arr[5];
	int x2[200];

void swap(int a,int b) //a,b��ʾ�����±�
{
int temp;
temp=arr[a];
arr[a]=arr[b];
arr[b]=temp;
}
int x,j=0,x1[200];
void Fullsort(int n)
{
if(n==5) //���
{
int i;
for(i=0;i<=4;i++)
x=10000*arr[0]+1000*arr[1]+100*arr[2]+10*arr[3]+arr[4];
x1[j]=x;

//printf("%d",x1[j]);
j++;
//printf("\n");
 return;
}

 int i;
  
 for(i=n;i<=4;i++) //��n��λ�õ����ֱ������4-n��λ�õ���(��������)����
 {
 swap(n,i);
 Fullsort(n+1);
 swap(n,i); //������
 }

 }
 
 
void panduanzhishu()
{
	int o,s,s1;
	for(s1=0;s1<120;s1++){
		x2[s1]=0;
	}

	for(o=0;o<120;o++){
		int b=(int)sqrt(x1[o]);
		for(s=2;s<b;s++){
			if(x1[o]%s==0){
			break;}
		}
		if(s>=b) {
		x2[o]=x1[o];       //x2��Ϊ���� 
		//printf("%d\n",x2[o]);
	}
	}
}
	

 int main()
 {

scanf("%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
 Fullsort(0);
 panduanzhishu();
 
 int max=0;
 int s1;
 for(s1=0;s1<120;s1++){
 	if(x2[s1]>max){
 		max=x2[s1];
	 }
 } 
 if(max!=0){
 printf("%d\n",max);
}
else{printf("ERROR");
}
 
 /*
    for(s1=0;s1<120;s1++){
    	if (x2[s1]!=0)
    	break;
	}
	if(s1<=120){
		printf("ERROR");
	}
	*/	
	
return 0;
} 

//it is too difficult!!

 
 

