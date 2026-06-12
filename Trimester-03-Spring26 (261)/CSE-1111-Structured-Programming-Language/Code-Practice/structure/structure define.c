#include <stdio.h>
#include <string.h>

typedef struct student
{

    char name[100];
    int id;
    float cgpa;

} student; // st;

int main()
{

    // normal structure decleare
    // student st1 = {"Rayhan", 2, 2.5};

    student st1; // st student1;

    // using pointer
    // char *name; -- use this at first
    // st1.name ="Rayhan";

    // using string
    strcpy(st1.name, "Rayhan");
    st1.id = 2;
    st1.cgpa = 2.5;

    printf("Name : %s\n", st1.name);
    printf("ID : %d\n", st1.id);
    printf("CGPA : %f\n", st1.cgpa);
}