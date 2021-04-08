/*
3、求int buf[]={1,5,4,3,7,6,8,9};
		     int key=?;
			 求key所在buf中的位置。若存在，则输出其下标位置。不存在，则输出不存在。
*/
#include<stdio.h>
int main(void)
{
    int buf[10] = {1,5,4,3,7,6,8,9};
    int ilen = 8;
    int key = 3;
	int i =0,a,j;
	for(i=0;i<ilen;i++)
	{
		if(buf[i]==key)
		{
			printf("存在%d,下标位置为:%d\n",key,i);
			j = 1;
			break;
		}
	}
	if(j!=1)
	{
		printf("不存在%d,下标位置为:%d\n",key,i);
	}
    return 0;
}