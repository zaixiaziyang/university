/*
1、定义一个整型数组并初始化
			1、该数组分配空间长度
			2、倒置输出
			3、元素之和
			4、求平均值
			5、输出比平均值大的元素值
			6、输出下标为偶数的元素值
*/
#include <stdio.h>
int main(void)
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10];
    int i, t;
	double sum = a[0];
    double pjz;
    for (i = 0; i < 10 / 2; i++)
    {
        t = a[i];
        a[i] = a[10 - 1 - i];
        a[10 - 1 - i] = t;
    }
    printf("倒叙的输出为 :\n");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");
	sum = 0;
    for (i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    pjz = sum / 10;
    printf("元素之和为：%lf\n", sum);
    printf("平均值为：%lf\n", pjz);
    for (i = 0; i < 10; i++)
    {
        if (a[i]>pjz)
        {
            printf("比平均值大的数为：%d\n ",a[i]);
        }
    }
    for (i = 0; i < 10; i++)
    {
        if(i % 2 == 0){
            printf("下标为偶数的元素值：%d\n",a[i]);
        }
    }
	printf("\n");
    return 0;
}