#include <stdio.h>

int main() {
    int m, n;

    if (scanf("%d %d", &m, &n) == 2) {
        
        int total_squares = m * n;
        int max_dominoes = total_squares / 2;
        
        printf("%d\n", max_dominoes);
    }

    return 0;
}