#include <stdio.h>
int main (){
    int num, i ,s=0;

    printf("Ingrese un numero: ");
    scanf("%d",&num);

    while (num<1)
    {
        printf("Error, debe ingresar un numero a 0");
        scanf("%d",&num);
    }

    for (i = 1; i <= num; i++)
    {
        s=s+i;
    }
    
    printf("La suma de Gauss para %d es %d\n", num, s);
}
