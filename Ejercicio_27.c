#include <stdio.h>
int main (){
    int num1, num2, i, j, numDef1, numDef2;
    printf("Bienvenido, este programa compara cual numero tiene mas digitos\n");
    printf("Ingresa el primer numero: ");
    scanf("%d",&num1);
    printf("Ahora ingresa el segundo numero: ");
    scanf("%d",&num2);

    numDef1=num1;
    numDef2=num2;

    
        for (i = 0; num1>0; i++)
        {
            num1=num1/10;
        }

           for (j = 0; num2>0; j++)
        {
            num2=num2/10;
        }

        
        if (i>j)
        {
            printf("\n%d es el numero con mas digitos\n", numDef1);
            printf("Tiene %d de digitos, por lo que es mayor", i);
        } 
        else if (i<j)
        {
            printf("\n%d es el numero con mas digitos\n", numDef2);
            printf("Tiene %d de digitos, por lo que es mayor", j);
        }
        else
        {
            printf("%d y %d tienen la misma cantidad de digitos, por lo que ninguno es mayor", numDef1, numDef2);
        }
        

        return 0;
}