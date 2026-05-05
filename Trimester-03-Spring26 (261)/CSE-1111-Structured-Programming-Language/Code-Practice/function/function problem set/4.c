#include<stdio.h>
void funcPositiveNegativeZero(int num);

int main () {
int num;
printf("Enter a number: ");
scanf("%d",&num);
funcPositiveNegativeZero(num);
return 0;

}

void funcPositiveNegativeZero(int num){

    if(num>0){
        printf("%d is a Positive number\n",num);
    }else if(num<0){
        printf("%d is a Negative number\n",num);
    }else{
        printf("%d is Zero\n",num);
    }
}