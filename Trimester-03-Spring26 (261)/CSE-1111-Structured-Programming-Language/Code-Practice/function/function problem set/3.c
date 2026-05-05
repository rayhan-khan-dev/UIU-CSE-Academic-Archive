#include<stdio.h>
void findEvenOdd(int num);

int main () {

int num;
printf("Enter a number: ");
scanf("%d",&num);
findEvenOdd(num); //function call
return 0;

}

//function definition
void findEvenOdd(int num){ 

    if(num%2==0){
        printf("%d is an Even number\n",num);
    }else{
        printf("%d is an Odd number\n",num);
    }

}