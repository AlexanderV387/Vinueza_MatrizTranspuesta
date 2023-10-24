#include <stdio.h>
int main (){

    int num, detener, i;
//Se inicializa i en 0
    i=0;

    do
    {
        //Se le pide de un incio al usuario ingresar cualquier numero
        printf ("Ingrese un numero positivo o negativo: ");
        scanf("%d", &num);
         

        if (num<0)
        {
            i++;
        }
//Se hace un proceso repetitivo que finaliza al ingresar 2
        printf("Presiones 1 para ingresar un nuevo numero, y 2 para contar los negativos: ");
        scanf("%d", &detener);
        
    } while (detener!=2);
//Se muestra al usuario los numeros negativos ingresados     
    printf ("La cantidad de numeros negativos es %d", i);
    


    return 0;
}