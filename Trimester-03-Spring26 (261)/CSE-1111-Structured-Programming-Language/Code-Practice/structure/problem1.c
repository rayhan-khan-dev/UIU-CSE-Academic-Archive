#include <stdio.h>
#include <string.h>

typedef struct customer
{

    char name[100];
    int id;
    int number_shopped;
    float spent[500];

} customer;

int main()
{

    customer cs[5];

    for (int i = 0; i < 5; i++)
    {

        printf("\nEnter The Info of customer %d\n", i + 1);

        printf("Enter Name : ");
        scanf(" %[^\n]s", cs[i].name);

        printf("Enter ID : ");
        scanf("%d", &cs[i].id);

        printf("Number of shopping : ");
        scanf("%d", &cs[i].number_shopped);

        // printf("Enter Your spent: ");
        // scanf("%f", &customer[i].spent);

        for (int j = 0; j < cs[i].number_shopped; j++)
        {

            printf("\n spend money on shopping %d", j + 1);
            scanf("%f", &cs[j].spent[j]);
        }
    }

    char avg[500];

    for (int i = 0; i < 5; i++)
    {
        float sum = 0;

        for (int j = 0; j < cs[j].number_shopped; j++)
        {

            sum += cs[j].spent[j];
        }

        avg[i] = sum / cs[i].number_shopped;
    }

    float maxAvg = avg[0];
    int index = 0;

    int i = 1;

    while (i < 5)
    {
        if (cs[i].number_shopped > 5)
        {

            if (maxAvg < avg[i])
            {

                maxAvg = avg[i];
                index = i;
            }
        }
        i++;
    }

    printf("\n--- WINNER DETAILS --- \n");
    printf("The winner is: %s\n", cs[index].name);
    printf("Winner ID: %d\n", cs[index].id);
    printf("Highest Average Spend: %.2f\n", maxAvg);

    return 0;
}