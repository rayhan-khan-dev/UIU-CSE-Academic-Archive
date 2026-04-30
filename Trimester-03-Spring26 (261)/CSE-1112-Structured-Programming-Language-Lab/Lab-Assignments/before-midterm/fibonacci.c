#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) return 0;

   
    long long first = 1, second = 1, next;

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
           
            printf("%lld", first);
        } 
        else if (i == 2) {
          
            printf(" %lld", second);
        } 
        else {

            next = first + second;
            printf(" %lld", next);
            
            
            first = second;
            second = next;
        }
    }
    
    printf("\n");
    return 0;
}