#include <stdio.h>

int main() {
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);
    
    if (num == 2) {
        printf("Es Primo\n");
    } 
    else if (num % 2 == 0 || num <= 1) {
        printf("No es primo\n");
    } 
    else {
        int esPrimo = 1;
        for (int i = 3; i * i <= num; i += 2) { 
            if (num % i == 0) {
                esPrimo = 0; 
                break;       
            }
        }
        
        if (esPrimo) {
            printf("Es Primo\n");
        } else {
            printf("No es primo\n");
        }
    }

    return 0;
}
