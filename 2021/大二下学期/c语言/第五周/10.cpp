// 输入一个数字，求该数字中位数最大的是那一位。
#include <stdio.h>
int main()
{ int num,t,x=0;
	scanf("%d",&num);
	while(num>0){
		t=num%10;
		if(t>x){
			x=t;
		}
		num=num/10;
	}
	printf("%d\n",x);
    return 0;
}