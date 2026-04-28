#include <stdio.h>
#include "Funciones.h"

int IngresarNumero()
{
    int num;
    printf("ingrese un numero:\n");
    scanf("%d",&num);
    return num;
}
void Verificacion(int *m, int *n)
{
    while (*m<*n || *n<0)
    {
    printf ("ERROR\n Nuemro invalidos\n");
    *m= IngresarNumero();
    *n= IngresarNumero();
    }
}
int Factorial(int num)
{
    int resultado=1, i;
        for (i=1;i<=num;i++)
        {
            resultado=resultado *i;
        }
    return resultado;
}

void CalculoCombinatorio(int m, int n)
{
    int Resultado, cociente=m-n;

    Resultado = Factorial(m)/(Factorial(n)*Factorial(cociente));
    printf ("El resultado es: %d ", Resultado);
}
