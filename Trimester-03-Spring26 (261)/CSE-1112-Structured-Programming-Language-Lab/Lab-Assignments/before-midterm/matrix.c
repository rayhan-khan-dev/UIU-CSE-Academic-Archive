#include <stdio.h>

int main() {
    int m, n, p, q;
    int A[10][10], B[10][10], res[10][10];

    
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    scanf("%d %d", &p, &q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    if (n != p) {
        printf("0\n");
    } else {
       
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                res[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    res[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                printf("%d", res[i][j]);
                if (j < q - 1) printf(" "); 
            }
            printf("\n"); 
        }
    }

    return 0;
}