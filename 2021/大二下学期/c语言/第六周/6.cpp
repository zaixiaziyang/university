/*
6.现在给出两个数组：
			数组a："1,7,9,11,13,15,17,19"
			数组b："2,4,6,8,10"
			两个数组合并为数组c。
*/
#include <stdio.h>
int main(void)
{
    int c[100], i, f1, f2;
    int a[] = {1, 7, 9, 11, 13, 15, 17, 19};
    int b[] = {2, 4, 6, 8, 10};

    f1 = sizeof(a) / 4;

    f2 = sizeof(b) / 4;

    for (i = 0; i < f1; i++)
    {
        c[i] = a[i];
    }

    for (i = 0; i < f2; i++)
    {
        c[i + f1] = b[i];
    }

    printf("数组c为：\n");
    for (i = 0; i < (f1 + f2); i++)
    {
        printf("%d ", c[i]);
    }
    printf("%\n");
    return 0;
}
