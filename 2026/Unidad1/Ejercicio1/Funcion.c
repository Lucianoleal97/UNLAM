#include <stdio.h>
#include "Funcion.h"
int IngresarNumero()
{
    int num;
    printf("ingrese  un numero factorial: \n");
    scanf("%d",&num);
    return num;
}
 int Verificacion (int num)
{
        while(num <1)
    {
        printf ("Error, el numero no puede ser menor a 1\n");
        IngresarNumero;
    }
    return num;
}
int Calculo (int num)
{
    int resultado=1, i;

     if (num==1)
    {
        printf ("El resultado es : 1");
        return 0;
    }
        for (i=1;i<=num;i++)
        {
            resultado=resultado *i;
        }
        printf("El resultado es: %d", resultado);
    return 0;
}
