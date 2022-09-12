#include <stdio.h>

int main()
{
    int sum, num = 1;

    while (num < 11)
    {
        sum = 5 * num;
        printf("5 x %d = %d\n", num, sum);
        num++;
    }

    return 0;
}