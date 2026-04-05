#include<stdio.h>
int main () {

int x,n;
int found=0;

    printf("Enter target number (x): ");
    scanf("%d", &x);

    printf("Enter number of chances (n): ");
    scanf("%d", &n);

int i,guess;
for(int i=1; i<=n; i++){

scanf("%d",&guess);

    if(guess==x){
        printf("Right, player 2 wins\n");
        found=1;
        break;
    }else{
        printf("Wrong , %d choice(s) left\n",n-i);
    }

}

  if (found == 0) {
        printf("Player-1 wins!\n");
  }

}