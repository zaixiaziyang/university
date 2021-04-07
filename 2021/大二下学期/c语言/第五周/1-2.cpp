#include <stdio.h>
int main()
{
    int i = 1, sum = 0; //求1-100奇数的和
    while (i <= 100)
    {
        sum = sum + i;
        i += 2;
    }
    printf("1-100奇数和:%d\n", sum);
    return 0;
}