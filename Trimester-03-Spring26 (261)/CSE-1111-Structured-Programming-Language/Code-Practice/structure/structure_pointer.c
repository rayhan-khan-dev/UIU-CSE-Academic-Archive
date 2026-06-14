#include <stdio.h>

typedef struct student
{

    char *name;
    int id;
    float cgpa;
} st;

int main()
{

    st student1;

    st *student_ptr = &student1;

    printf("Enter Your Name : ");
    scanf(" %[^\n]", student_ptr->name);

    printf("Enter Your ID : ");
    scanf("%d", &student_ptr->id);

    printf("Enter Your CGPA: ");
    scanf("%f", &student_ptr->cgpa);

    // student1.name = "Rayhan";
    // student1.id = 12;
    // student1.cgpa = 2.5;

    // // (*student_ptr).name = "Rakib";

    // student_ptr->name = "Rakib";
    // student_ptr->id = 12;
    // student_ptr->cgpa = 2.5;

    printf("%s\n", (*student_ptr).name);
    printf("%d\n", (*student_ptr).id);
    printf("%.2f\n", (*student_ptr).cgpa);
}