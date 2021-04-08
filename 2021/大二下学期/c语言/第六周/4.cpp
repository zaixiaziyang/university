/*
4.将一个给定的整型数组转置输出，
			例如：	源数组，1 2 2 4 5 6
			转置之后的数组，6 5 4 2 2 1
*/
#include <stdio.h>
int main(void)
{
    int a[6] = {1, 2, 2, 4, 5, 6};
    int i, t;
    for (i = 0; i < 6 / 2; i++)
    {
        t = a[i];
        a[i] = a[6 - 1 - i];
        a[6 - 1 - i] = t;
    }
    printf("转置输出为 :\n");
    for (i = 0; i < 6; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}