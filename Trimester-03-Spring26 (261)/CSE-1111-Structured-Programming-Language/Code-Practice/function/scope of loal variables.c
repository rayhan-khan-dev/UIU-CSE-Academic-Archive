#include<stdio.h>

void f1 (float x) {

    int n=6;
    printf("%f\n",n+x);

}

int f2 (void) {

    float n=10;
    printf("%f\n",n);
    
}

int main () {

int n=5;
f1(3);
f2();
return 0;


}