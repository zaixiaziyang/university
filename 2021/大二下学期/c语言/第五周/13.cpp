// 一张纸的厚度大约是0.08mm,对折多少
#include <stdio.h>
int main()
{
    int n = 0;
    float a = 0.08;
    while (a <= 8848000)
    {
        a = 2 * a;
        n++;
    }
    printf("%d\n", n);
    return 0;
}