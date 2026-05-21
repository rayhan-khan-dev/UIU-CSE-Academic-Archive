#include <stdio.h>

void SwapByValue(int x, int y)
{

    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("Value in func: %d %d\n", x, y);
}

int main()
{

    int a = 10;
    int b = 20;

    SwapByValue(a, b);

    printf("value in main:  %d %d\n", a, b);

    return 0;
}
