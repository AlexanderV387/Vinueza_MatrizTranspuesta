#include <stdio.h>
int main (){
    double num;
    int suma=1, i, factorial=1;

    printf("Ingrese un numero entero: ");
    scanf ("%lf", &num);

    while (num != (int)num || num<=0)
    {
        printf("Error, Ingrese un numero entero positivo: ");
        scanf ("%lf", &num);
    }

    for (i = 2; i <= (int)num; i++)
    {
        factorial *= i;
        suma += factorial;
    }
    printf("La suma de los factoriales de los números entre 1 y %d es %d\n", (int)num, suma);

    return 0;
}