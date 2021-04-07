#include <stdio.h>
int main()
{
    int i = 1; //阶乘1*2*3*4*5
    int sum = 1;
    while (i <= 5)
        sum *= i;
    i++;
    printf("1*2*3*4*5=%d", sum);
    return 0;
}