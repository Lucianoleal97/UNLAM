#include <stdio.h>
#include "Funcion.h"
int main ()
{
    int num;
    num= IngresarNumero();
    num= Verificacion(num);
    Calculo(num);

/*    int num, i;
    int resultado=1;
    printf("ingrese  un numero factorial: \n");
    scanf("%d",&num);
    while(num <1)
    {
        printf ("Error, el numero no puede ser menor a 1\n");
        printf ("ingrese otro numero: \n");
        scanf("%d",&num);
    }
    if (num==1)
    {
        printf ("El resultado es : 0");
        return 0;
    }
        for (i=1;i<=num;i++)
        {
            resultado=resultado *i;
        }
        printf("El resultado es: %d", resultado); */
    return 0;
}
