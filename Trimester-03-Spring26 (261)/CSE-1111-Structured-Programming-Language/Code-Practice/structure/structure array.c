#include <stdio.h>
#include <string.h>

typedef struct student
{

    char name[100];
    int id;
    float cgpa;

} st;

int main()
{

    st student[2];

    for (int i = 0; i < 3; i++)
    {

        printf("\nEnter The Info of Student %d\n", i + 1);

        printf("Enter Your Name : ");
        scanf(" %[^\n]", student[i].name);

        printf("Enter Your ID : ");
        scanf("%d", &student[i].id);

        printf("Enter Your CGPA: ");
        scanf("%f", &student[i].cgpa);
    }

    for (int i = 0; i < 3; i++)
    {

        printf("\nStudent NO. %d", i + 1);
        printf("\nStudent Name : %s", student[i].name);
        printf("\nStudent ID : %d", student[i].id);
        printf("\nStudent CGPA : %.2f\n", student[i].cgpa);
    }

    float maxCgpa = student[0].cgpa;
    int index = 0;

    int i = 1;

    while (i < 3)
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
    return 0;
}
