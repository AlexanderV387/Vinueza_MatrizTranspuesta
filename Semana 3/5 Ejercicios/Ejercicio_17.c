#include <stdio.h>

int main() {
    int num1, num2, i, multi1 = 2, multi2 = 5, suma1 = 0, suma2 = 0;

    printf("Ingrese el primer numero (x): ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero (y): ");
    scanf("%d", &num2);

    printf("Los primeros %d múltiplos de 2 son:\n", num1);
    for (i = 0; i < num1; i++) {
        suma1 += multi1;
        printf("%d ", multi1);
        multi1 += 2;
    }

    printf("\nLos primeros %d múltiplos de 5 son:\n", num2);
    for (i = 0; i < num2; i++) {
        suma2 += multi2;
        printf("%d ", multi2);
        multi2 += 5;
    }

    printf("\nLa suma de los primeros %d múltiplos de 2 es %d\n", num1, suma1);
    printf("La suma de los primeros %d múltiplos de 5 es %d\n", num2, suma2);


    if (suma1 > suma2) {
        printf("La suma de los primeros %d múltiplos de 2 es mayor que la de los primeros %d múltiplos de 5.\n", num1, num2);
    } else if (suma1 < suma2) {
        printf("La suma de los primeros %d múltiplos de 5 es mayor que la de los primeros %d múltiplos de 2.\n", num2, num1);
    } else {
        printf("Las sumas son iguales.\n");
    }

    return 0;
}
