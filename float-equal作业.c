//å®žçŽ°ä»£ç åˆ¤æ–­2ä¸ªfloatå˜é‡ç›¸ç­‰
//è¯¯å·®ç²¾ç¡®åˆ°æ—¶å°æ•°ç‚¹åŽ5ä½
#include <stdio.h>
int main()
{
    float m = 1.78;
    float x = 1.779999, y = 2;
    float z = m / y, z1 = x / y;
    

    long a = z * 100000;
    long b = z1 * 100000;      
    
    long a1 = z * 1000000;     //ËÄÉáÎåÈë 
    if(a1 - a*10  >= 5){
    	a = a + 1;
	}
	    long b1 = z1 * 1000000;  //ËÄÉáÎåÈë 
    if(b1 - b*10  >= 5){
    	b = b + 1;
	}

    int c = a - b;         //ÅÐ¶ÏÐ¡ÊýµãºóÎåÎ»ÊÇ·ñÏàÍ¬ 
    if (c <= 1){	
	z = z1;
	}
    
    if (z == z1) {
        z = (m + x) / y;
    }
    printf("Z is %f\n", z);
    printf("Z1 is %f\n", z1);
    return 0;
}
