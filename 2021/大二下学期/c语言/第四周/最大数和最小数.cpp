#include<stdio.h>

int main()
{
	// 判断a，b，c的最大值和最小值
	int a=3,b=2,c=4;
	/* 三元运算符计算如下
	printf("最大值为：%d\n", a >= b ? (a >= c ? a : c) : (b >= c ? b : c));
	printf("最小值为：%d", a <= b ? (a <= c ? a : c) : (b <= c ? b : c));
	*/
/*
	// 普通的if判断语句
	// 判断最大数为：
	if (a < b)
	{
		if (b < c) {
			printf("最大数为：%d\n", c);
		}
		else
		{
			printf("最大数为：%d\n", b);
		}
	}
	else if(a < c)
	{
		printf("最大值为：%d\n", c);
	}
	else
	{
		printf("最大数为：%d\n", a);
	}
	// 判断最小数为：
	if (a > b)
	{
		if (b > c) {
			printf("最小数为：%d", c);
		}
		else
		{
			printf("最小数为：%d", b);
		}
	}
	else if (a > c)
	{
		printf("最小值为：%d", c);
	}
	else
	{
		printf("最小数为：%d", a);
	}
*/
	// 优化一下if判断逻辑
	int  max, min;
	max = min = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	printf("最大数：%d\n最小数：%d\n", max, min);
	return 0;
}