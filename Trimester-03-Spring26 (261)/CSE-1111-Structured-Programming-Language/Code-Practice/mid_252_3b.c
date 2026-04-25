#include<stdio.h>
int main () {

int n,num,count=0;
float sum = 0; average;

printf("please enter the number of integers: ");
scanf("%d",&n);

while(count<n){
    printf("please enter an integer: ");
    scanf("%d",&num);

    if(num>0){
        count++;
        sum = sum + num;
        average = sum/count;

printf("Average Calculation: %.2f / %d = %.2f\n", sum, count, average);
            printf("Output: %.2f\n\n", average);

    }
    else{
        printf("Invalid input. Please enter a positive integer.\n");
    }
    

}
}