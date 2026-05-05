#include<stdio.h>

void printValue(char val);

int main () {

    char input;
    printf("Enter a character: ");
    scanf("%c", &input);


    printf("Value recieved from main: %c\n", input);
    printValue(input);

 return 0;

}

void printValue(char val){
    printf("%c\n", val);
}