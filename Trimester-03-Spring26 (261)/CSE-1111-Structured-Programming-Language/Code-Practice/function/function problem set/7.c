#include <stdio.h>
void printReverse(int b[], int n);

int main()
{

    int n;
    printf("Enter n Numbers: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printReverse(a, n);
}

void printReverse(int b[], int n)
{

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", b[i]);
    }

    printf("\n");
}
