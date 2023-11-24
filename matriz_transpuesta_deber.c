#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, m;

    printf("Ingrese el número de filas: ");
    scanf("%d", &n);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &m);

    int A[n][m], B[m][n];

    srand(time(NULL));

    printf("\nMatriz Original A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = rand() % 101;  
            printf("%d\t", A[i][j]);
            B[j][i] = A[i][j];
        }
        printf("\n");
    }

    printf("\nMatriz Transpuesta B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
