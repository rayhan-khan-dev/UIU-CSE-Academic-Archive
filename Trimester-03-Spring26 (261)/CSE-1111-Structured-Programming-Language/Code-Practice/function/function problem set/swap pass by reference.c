#include <stdio.h>

void SwapByReference(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("value in func: %d %d\n", *x, *y);
}

int main()
{
    int a;
    int b;
    scanf("%d%d", &a, &b);
    SwapByReference(&a, &b);
    printf("value in main: %d %d\n", a, b);
    return 0;
}