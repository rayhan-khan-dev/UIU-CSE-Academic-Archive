#include<stdio.h>
int main () {

int num,reverse=0,remainder;

printf("please enter an integer: ");
scanf("%d",&num);

while(num!=0){
    remainder=num%10;
    reverse=reverse*10+remainder;
    num=num/10;
}
printf("The reverse of the entered integer is: %d", reverse);

}