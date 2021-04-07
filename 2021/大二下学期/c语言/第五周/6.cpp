#include <stdio.h>
int main()
{int a=0,b;//输出等腰三角形
while(a<=4)
{
	b=4-a;	
	while(b>=0)
	{
		printf(" ");
		b--;
	}
	b=1;
	while(b<=a*2+1)
	{
		printf("*");
		b++;
	  }
    printf("\n");
    a++;
}
return 0;
}