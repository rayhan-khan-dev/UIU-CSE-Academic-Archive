#include <stdio.h>

int IsPrime(int n)
{

    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void GeneratePrime(int N)
{
    printf("Prime numbers are less than %d: ", N);

    for (int i = 2; i < N; i++)
    {

        if (IsPrime(i) == 1)

        {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main()
{

    int number;

    printf("Enter the upper limit (N): ");
    scanf("%d", &number);

    GeneratePrime(number);
    return 0;
}
