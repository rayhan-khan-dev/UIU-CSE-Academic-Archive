#include<stdio.h>
int main () {

char ch;
int count = 1;

while(1){

    scanf(" %c",&ch);
    if(ch=='A'){
        break;
    }
    printf("Input %d: %c\n", count, ch);
    count++;
}

return 0;
}