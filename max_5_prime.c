//å°æ˜æœ‰ 5 å¼ æ•°å­—å¡ç‰‡ï¼Œä¸Šé¢åˆ†åˆ«ä¸ºæ•°å­— 1ï¼Œ 2ï¼Œ 3ï¼Œ 6ï¼Œ 9ã€‚å°æ˜æƒ³ç”¨è¿™ 5 å¼ æ•°å­—å¡ç‰‡ç»„æˆä¸€ä¸ªæœ€å¤§çš„ 5 ä½
//ç´ æ•°ï¼Œè¿™ä¸ªäº”ä½æ•°æ˜¯_______ã€‚
//ç¼–ç¨‹ï¼šä»»æ„è¾“å…¥5ä¸ªæ•°å­—ï¼Œå°†å®ƒä»¬ç»„åˆä¸ºæœ€å¤§çš„5ä½ç´ æ•°è¾“å‡ºã€‚å¦‚æœä¸å­˜åœ¨5ä½ç´ æ•°ï¼Œåˆ™è¾“å‡ºERRORã€‚
#include<stdio.h>
#include<math.h>


 	int arr[5];
	int x2[200];

void swap(int a,int b) //a,b±íÊ¾Êı×éÏÂ±ê
{
int temp;
temp=arr[a];
arr[a]=arr[b];
arr[b]=temp;
}
int x,j=0,x1[200];
void Fullsort(int n)
{
if(n==5) //Êä³ö
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
  
 for(i=n;i<=4;i++) //µÚn¸öÎ»ÖÃµÄÊı·Ö±ğÓëºóÃæ4-n¸öÎ»ÖÃµÄÊı(°üº¬±¾Éí)½»»»
 {
 swap(n,i);
 Fullsort(n+1);
 swap(n,i); //»»»ØÀ´
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
		x2[o]=x1[o];       //x2ÄÚÎªÖÊÊı 
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

 
 

