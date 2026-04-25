#include<stdio.h>
int main() {

int n,avg,num,count=0;
float sum = 0; 

printf("please enter the number of integers: ");
scanf("%d",&n);

while(count<n){
    printf("please enter an integer: ");
    scanf("%d",&num);

    if(num>0){
        count++;
        sum = sum + num;
        avg = sum/count;

printf("Average Calculation: %.2f / %d = %.2f\n", sum, count, avg);
            printf("Output: %.2f\n\n", avg);

    }
    else{
        printf("Invalid input. Please enter a positive integer.\n");
    }
    // The loop will continue until the user has entered 'n' positive integers. Each time a valid integer is entered, the program updates the sum and average, and displays the current average calculation and output. If an invalid input is entered, it prompts the user to enter a positive integer without incrementing the count.

}
}