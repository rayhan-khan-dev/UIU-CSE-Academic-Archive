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

int GenNthPrime(int N)
{

    int count = 0;
    int num = 2;

    while (count < N)
    {

        if (IsPrime(num) == 1)
        {

            count++;

            if (count == N)
            {
                return num;
            }
        }

        num++;

        {
            printf("Prime numbers are less than %d: ", N);

            for (int i = 2; i < N; i++)
                if (IsPrime(i) == 1)

                {
                    printf("%d ", i);
                }
        }
    }

    return num;
}

int main()
{

    int n;

    printf("Enter the value of N (to find Nth prime): ");
    scanf("%d", &n);

    int nth_prime = GenNthPrime(n);

    printf("%d th Prime: %d\n", n, nth_prime);
}