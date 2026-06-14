#include <stdio.h>
#include <string.h>

typedef struct student
{

    char name[100];
    int id;
    float cgpa;

} st;

void input(st student[], int size)
{

    for (int i = 0; i < size; i++)
    {

        printf("\nEnter The Info of Student %d\n", i + 1);

        printf("Enter Your Name : ");
        scanf(" %[^\n]", student[i].name);

        printf("Enter Your ID : ");
        scanf("%d", &student[i].id);

        printf("Enter Your CGPA: ");
        scanf("%f", &student[i].cgpa);
    }
}

void output(st student[], int size)
{

    for (int i = 0; i < size; i++)
    {

        printf("\nStudent NO. %d", i + 1);
        printf("\nStudent Name : %s", student[i].name);
        printf("\nStudent ID : %d", student[i].id);
        printf("\nStudent CGPA : %.2f\n", student[i].cgpa);
    }
}

void FindMaxCgpa(st student[], int size)
{

    float maxCgpa = student[0].cgpa;
    int index = 0;

    int i = 1;

    while (i < size)
    {
        if (student[i].cgpa > maxCgpa)
        {

            maxCgpa = student[i].cgpa;
            index = i;
        }
        i++;
    }

    printf("\nThe Max CGPA holder\n");
    printf("\nStudent Name : %s", student[index].name);
    printf("\nStudent ID : %d", student[index].id);
    printf("\nStudent CGPA : %.2f", student[index].cgpa);
}

int main()
{

    int n;
    printf("Enter the size: ");
    scanf("%d", &n);

    st student[n];

    input(student, n);
    output(student, n);
    FindMaxCgpa(student, n);
}