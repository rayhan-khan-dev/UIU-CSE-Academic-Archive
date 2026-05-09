#include <stdio.h>

void Func(int (*A)[2][2])
{
    printf("%d\n", A[0][0][0]); // 2
    printf("%d\n", A[1][0][1]); // 4
    printf("%d\n", A[2][1][1]); // 13
}

int main()
{
    int C[3][2][2] = {
        {{2, 5}, {7, 9}},
        {{3, 4}, {6, 1}},
        {{0, 8}, {11, 13}}};

    Func(C);

    return 0;
}