//实现代码判断2个float变量相等
//误差精确到时小数点后5位
#include <stdio.h>
int main()
{
    float m = 1.78;
    float x = 1.779999, y = 2;
    float z = m / y, z1 = x / y;
    

    long a = z * 100000;
    long b = z1 * 100000;      
    
    long a1 = z * 1000000;     //�������� 
    if(a1 - a*10  >= 5){
    	a = a + 1;
	}
	    long b1 = z1 * 1000000;  //�������� 
    if(b1 - b*10  >= 5){
    	b = b + 1;
	}

    int c = a - b;         //�ж�С�������λ�Ƿ���ͬ 
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
