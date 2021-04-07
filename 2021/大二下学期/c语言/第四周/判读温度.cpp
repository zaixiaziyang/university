#include<stdio.h>

int main()
{
	// 判断温度是否适合
	int temp;
	printf("请输入温度值temp:");
	scanf_s("%d", &temp);
	if (temp > 50) {
		printf("温度过高");
	}
	else if (temp < 0) {
		printf("温度过低");
	}
	else{
		printf("温度适宜");
	}
	return 0;
}