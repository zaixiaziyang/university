#include<stdio.h>
/*
// 第一题
int main()
{
	int a=0,b=0,c=0,f=0,i,d,e;
	for(d=1;d<=100;d++){
		c+=d;
	}
	printf("1-100的和为：%d\n",c);
	for(e=1;e<=100;e++){
		if(e%2!=0){
		f+=e;
		}
	}
	printf("1-100奇数的和为：%d\n",f);
	for(i=1;i<=100;i++){
		if(i%3==0){
			b+=i;
			printf("%d ",i);
			a+=1;
			if(a%5==0){
				printf("\n");
			}
		}
	}
	printf("\n");
	printf("以上元素的和为：%d",b);
	printf("\n");
	return 0;
}
*/

// 题目分割线----------------------------

/*
// 第三题 n的阶层
int main()
{
	int i,n;
	double sum = 1;
	printf("请输入你要求的阶层：")
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum*=i;
	printf("%d的阶层为%lf",n,sum);
	printf("\n");
	return 0;
}
*/

// 题目分割线----------------------------

/*
// 第四题 前6项的阶层
int main()
{
	int i;
	double sum = 1;
	for(i=1;i<=6;i++)
	sum*=i;
	printf("6的阶层为%lf",sum);
	printf("\n");
	return 0;
}
*/

// 题目分割线----------------------------


// 第六题 打印金字塔三角形
/*
int main()
{
	int i,j,n=6;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for(j=n-i-1;j<n+i;j++)
		{
			printf("*");
		}
	printf("\n");
	}
	return 0;
}
*/

// 题目分割线----------------------------


// 第七题 输入一个五位数，逆序输出
/*
int main()
{
	// 判断温度是否适合
	int n, a, b, c, d, e, m;
	printf("请输入一个五位的整数\n");
	scanf_s("%d", &n);
	e = n / 10000;
	d = n % 10000 / 1000;
	c = n % 1000 / 100;
	b = n % 100 / 10;
	a = n % 10;
	printf("%d\n", a * 10000 + b * 1000 + c * 100 + d * 10 + e);
	return 0;
}
*/

// 题目分割线----------------------------

// 第八题 判断一个大于4位数是否为回文数字
/*
int main()
{
int x;  //带输入的数
int g, s, b, q; //分别表示的是个位、十位、百位、千位
printf("请输入一个4位数：");
scanf_s("%d", &x);
g = x % 10;
b = (x % 100) / 10;
s = (x % 1000) / 100;
q = (x % 10000) / 1000;
if (g == q && s == b)
printf("x=%d是一个回文数 ", x);
else
printf("x=%d不是一个回文数 ", x);
return 0;
}
*/

// 题目分割线----------------------------

// 第九题 求水仙花数并输出 (100-1000以内)
/*
int main()
{
	int hun, ten, ind, n;
	printf("水仙花数有:");
	for (n = 100; n < 1000; n++)
	{
		hun = n / 100;
		ten = (n - hun * 100) / 10;
		ind = n % 10;
		if (n == hun * hun * hun + ten * ten * ten + ind * ind * ind)
			printf("%d  ", n);
	}
	printf("\n");

	return 0;
}
*/

// 第十题 输入一个数字，求该数字中位数最大的是哪一位。
/*
int max(int x, int y)
{
	return(x > y ? x : y);
}
int main(void)
{
	int max(int x, int y);
	int a[10];
	int m, i;
	printf("输入元素的值：\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("\n");
	for (i = 1, m = a[0]; i < 10; i++)
	{
		if (max(m, a[i]) > m)
		{
			m = max(m, a[i]);
		}
	}

	printf("最大数是:%d", m);
	return 0;

}
*/

// 第11题打印菱形
/*
#include<stdlib.h>
void PrintLine(int blank_count, int start_count) {
	int i = 0;
	for (; i < blank_count; i++) {
		printf(" ");  //打印空格
	}
	for (i = 0; i < start_count; i++) {
		printf("*");
	}
	printf("\n");
}
void  PrintLingxing(int n) {
	//打印上半部分
	int i = 1;
	for (i = 1; i < n; i++) {
		PrintLine(n - i, 2 * i - 1);  // 打印每一行的空格和每一行的星号
	}
	//打印中间部分
	PrintLine(0, 2 * n - 1);
	//打印下半部分
	for (i = n - 1; i > 0; i--) {
		PrintLine(n - i, 2 * i - 1);
	}
}
int main() {
	PrintLingxing(7);    //对半的行数
	system("pause");
	return 0;
}
*/

// 第十三题 
/*
int main()
{
	int n = 0;
	float a = 0.08;
	while (a <= 8848000)
	{
		a = 2 * a;
		n++;
	}
	printf("需要对折：%d次\n",n);
	return 0;
}
*/

// 第十四题
/*
int main()
{
	int gj = 0;
	int mj = 0;
	int cj = 0;
	// 钱的关系式
	// 5*gj+3*mj+cj/3=100;
	// 个数的关系式
	// gj+mj+cj=100;
	for (gj = 0; gj <= 20; gj++) {
		for (mj = 0; mj < 34; mj++) {
			for (cj = 0; cj <= 300; cj++) {
				if (5 * gj + 3 * mj + cj / 3 == 100 && gj + mj + cj == 100
					&& cj % 3 == 0) {
					printf("公鸡:%d,母鸡:%d,雏鸡:%d\n", gj, mj, cj);
				}
			}
		}
	}
}
*/
