#include<stdio.h>

void gcd (int u,int v) {

    int temp;
    while(v!=0){
        temp =u%v;
        u=v;
        v=temp;
    }

     printf("GCD is %i\n",u);
}

int main (void) {

    gcd (250,35);
    gcd (1026,405);
    gcd (83,240);
    return 0;
}

//gcd prblm is to find the greatest common divisor of two integers. The function gcd takes two integers as input and prints their greatest common divisor using the Euclidean algorithm. The main function demonstrates the use of the gcd function by calculating and printing the greatest common divisor of several pairs of integers.