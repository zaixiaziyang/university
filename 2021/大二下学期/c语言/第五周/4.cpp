#include <stdio.h>
int main()
{
    int i = 1;
    long temp = 1; //求前六项阶乘的和
    long sum = 0;
    while (i <= 6)
    {
        temp *= i;
        sum += temp;
        i++;
    }
    printf("sum=%ld\n", sum);
    return 0;
}