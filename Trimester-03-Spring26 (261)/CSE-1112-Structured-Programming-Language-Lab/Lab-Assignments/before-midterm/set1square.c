#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {       
        for (int j = 0; j < n; j++) {   
            
            if (i == 0) {
               
                printf("@");
            } 
            else if (j == 0) {
                
                printf("@");
            } 
            else if (j == n - 1 - i) {
                
                printf("@");
            } 
            else {
         
                printf(".");
            }
        }
        
        printf("\n");
    }

    return 0;
}