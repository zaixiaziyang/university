#include <stdio.h>
int main()
{
    int a = 1, sum = 0; //求1-100的和
    while (a <= 100)
    {
        sum += a;
        a++;
    }
    printf("一百位整数和是%d\n", sum);
    return 0;
}