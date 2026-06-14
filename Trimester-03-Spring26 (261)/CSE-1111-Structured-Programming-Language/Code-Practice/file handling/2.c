#include <stdio.h>
#include <string.h>

typedef struct student
{

    char name[50];
    float cgpa;

} student;

int main()
{

    FILE *fptr, *write;

    fptr = fopen("marks.txt", "r");

    if (fptr == NULL)
    {
        printf("ERROR in mark");
        return 1;
    }
    write = fopen("max_cgpa.txt", "a");

    if (fptr == NULL)
    {
        printf("ERROR in max cgpa");
        return 1;
    }

    student st[50];
    int count = 0;
    char line[100];

    while (fgets(line, 100, fptr))
    {

        sscanf(line, "%s %f", st[count].name, &st[count].cgpa);
        count++;
    }

    float max_cgpa = st[0].cgpa;
    int max_index = 0;

    for (int i = 1; i < count; i++)
    {

        if (max_cgpa < st[i].cgpa)
        {
            max_cgpa = st[i].cgpa;
            max_index = i;
        }
    }

    fprintf(write, "Name:%s\nCGPA:%.2f\n", st[max_index].name, st[max_index].cgpa);

    fclose(fptr);
    fclose(write);
}