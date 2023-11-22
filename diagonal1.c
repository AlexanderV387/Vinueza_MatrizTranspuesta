#include <stdio.h>

int main() {
    int n, m;
    printf("Ingrese el valor para filas: ");
    scanf("%d", &n);
    printf("Ingrese el valor para columnas: ");
    scanf("%d", &m);

    int matrix[n][m];

    // Inicializar la matriz en ceros y poner 1s en la diagonal principal
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) {  // Condición para la diagonal principal
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
        }
    }

    // Imprimir la matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}