#include<stdio.h>

 int calculateFactorial(int n);

int main () {

int num,result;

printf("Enter a number: ");
scanf("%d",&num);

if(num<0){

printf("Please enter positive number");
}else{

result = calculateFactorial(num);
printf("%11d",result);

}

return 0;
 }

 int calculateFactorial(int n){

int fact=1;
for(int i=1; i<=n; i++){

    fact *=i;
}

return fact;

 }