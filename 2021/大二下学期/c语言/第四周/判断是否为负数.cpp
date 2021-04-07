#include<stdio.h>

int main()
{
	// 判断a，b，c的最大值和最小值
	int a;
	printf("请输入a的值:");
	scanf_s("%d", &a);
	if (a < 0) {
		printf("a是负数，值为：%d", a);
	}
	else{
		printf("a不是负数");
	}
	return 0;
}