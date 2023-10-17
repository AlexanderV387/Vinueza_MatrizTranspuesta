#include <stdio.h>
int main(){
    int num, i,j;

    printf("Ingrese 1 si quieres ver todas las tablas del 1 al 10, y presione 0 si es que no: ");
    scanf("%d",&num);

    if (num!=1)
    {
       printf("Lastima, pero no hay otra opcion presiona 1: ");
       scanf("%d",&num);
    }

    while (num!=1)
    {
        printf("Ya te dije que presioones 1 >:(\n");
        printf("Ahora si presiona 1 o nos qudaremos aqui todo el dia: ");
        scanf("%d",&num);
    }
    

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++) {
            printf("%dx%d=%d\n", i, j, i * j);
    }

    printf("\n");
    }
    


    return 0;
}
