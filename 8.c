#include <stdio.h>

int main()
{
    int num = 1, x;

    while (num < 11)
    {
        x = num * num;
        printf("%d ", x);
        num++;
    }

    return 0;
}