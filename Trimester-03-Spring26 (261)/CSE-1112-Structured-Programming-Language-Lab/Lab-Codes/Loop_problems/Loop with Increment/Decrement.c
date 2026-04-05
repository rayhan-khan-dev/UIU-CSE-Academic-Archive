#include<stdio.h>
int main () {

    int x,y;
    printf("enter X  and Y : ");
    scanf("%d%d",&x,&y);

if(x>y){
    while(x>y){
printf(" %d",x*x);
x--;
    }
} 
else if(x<y){
    while(x<y){
        printf(" %d",x*x);
        x++;
    }
    
}

printf("reached!");


}