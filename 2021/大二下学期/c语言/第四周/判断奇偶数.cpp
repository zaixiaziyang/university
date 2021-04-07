#include<stdio.h>

int main()
{
	int a;
	printf("请输入一个数字：");
	scanf_s("%d", &a);
	if (a % 2 == 1) {
		printf("%d是奇数",a);
	}
	else {
		printf("%d是偶数",a);
	}
	return 0;
}