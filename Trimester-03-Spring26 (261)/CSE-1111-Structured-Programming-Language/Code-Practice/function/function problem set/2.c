#include <stdio.h>

void printChar(char c) {
    printf("Value received from main: %c\n", c);
}

int main() {
    char val;
    printf("Enter a character: ");
    scanf("%c", &val);
    
    printChar(val);
    return 0;
}