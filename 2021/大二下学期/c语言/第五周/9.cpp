#include <stdio.h>
int main()
{
    int number, a, b, c;
    number = 100;
    while (number <= 999)
    {
        a = number / 100;
        b = number % 100 / 10;
        c = number % 10;
        number++;
        if (number == a * a * a + b * b * b + c * c * c)
            printf("%5d\n", number);
    }
    return 0;
}
