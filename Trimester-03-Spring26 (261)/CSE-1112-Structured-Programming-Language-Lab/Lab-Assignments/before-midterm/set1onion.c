#include <stdio.h>

int main() {
    int n, m;

  
    if (scanf("%d", &n) != 1) return 0;
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    
    if (scanf("%d", &m) != 1) return 0;
    int b[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    
    int i = 0; 
    int j = 0; 
    int first = 1; 

    while (i < n && j < m) {
        if (a[i] == b[j]) {
            // Found a match!
            if (!first) printf(" ");
            printf("%d", a[i]);
            first = 0;
            i++;
            j++;
        } 
        else if (a[i] < b[j]) {
           
            i++;
        } 
        else {
           
            j++;
        }
    }
    printf("\n");

    return 0;
}