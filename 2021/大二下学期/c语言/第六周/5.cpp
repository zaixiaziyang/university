/*
5.	int[] oldArr = {1,3,4,5,0,0,6,6,0,5,4,7,6,7,0,5} ;
			要求将以上数组中值为0的项去掉，将不为0的值存入一个新的数组，生成的新数组为：
			int[] newArr = {1,3,4,5,6,6,5,4,7,6,7,5} ;
*/
#include <stdio.h>
int main(void)
{

    int oldArr[20] = {1,3,4,5,0,0,6,6,0,5,4,7,6,7,0,5} ; 
    int newArr[20], m, n, i;
    for (m = n = 0; m < 20; m++)
        if (oldArr[m])
        {
            newArr[n] = oldArr[m];
            n++;
        }
    printf("生成的新数组为：\n");
    for (i = 0; i < n; i++)
        printf("%d ", newArr[i]);
    printf("\n");
    return 0;
}