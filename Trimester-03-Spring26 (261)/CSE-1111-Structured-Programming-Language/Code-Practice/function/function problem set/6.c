#include <stdio.h>

void calculateArraySum(int b[], int n);

int main()
{

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    calculateArraySum(a, n);
    return 0;
}

void calculateArraySum(int b[], int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += b[i];
    }
    printf("Sum in function: %d\n", sum);
    printf("Sum in main: %d\n", sum);
}