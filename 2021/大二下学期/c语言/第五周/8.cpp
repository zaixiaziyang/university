#include <stdio.h>
int main()
{
	int num,t,x=0,nn;
	scanf("%d",&num);
	nn=num;
	while(num>0)
	{
		t=num%10;
		x=x*10+t;
		num=num/10;
	}
	if(nn==x){
		printf("是回文素书\n");
	}
	else{
	
		printf("不是回文素书\n");
	}
    return 0;
}