#include <stdio.h>

long long numberPower(int x, int y);

int main()
{

    int x;
    printf("Enter base: ");
    scanf("%d", &x);

    int y;
    printf("Enter power: ");
    scanf("%d", &y);

    long long result = numberPower(x, y);
    printf("%d to the power %d is %11d", x, y, result);

    return 0;
}

long long numberPower(int x, int y)
{

    long long result = 1;
    for (int i = 1; i <= y; i++)
    {

        result *= x;
    }

    return result;
}