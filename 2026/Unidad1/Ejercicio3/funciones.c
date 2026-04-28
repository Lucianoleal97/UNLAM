#include <stdio.h>
#include "funciones.h"

double IngresarNumero ()
{
    double num;
    printf("ingrese un valor: \n");
    scanf("%lf",&num);
    return num;
}
void Verificacion (double *TOL)
{
    while (*TOL <= 0)
    {
        printf ("Error la tolerancia no puede ser menor a cero. \n");
        *TOL= IngresarNumero();
    }
}
double Factorial (int num)
{
    double resultado=1, j;
    for(j=1;j<=num;j++)
    {
        resultado=resultado*j;
    }
    return resultado;
}


double Exponente(double *x, int i)
{
    int j;
    double resultado=1;
    for (j=0;j<i;j++)
    {
        resultado=resultado*(*x);
    }
    return resultado;
}

void Calculo(double *x,double *TOL)
{
    int i=1;
    double resultado=1;
    double termino=1;
 while (termino>*TOL)
 {
     termino=Exponente(x,i) /Factorial(i);
     resultado=resultado+(termino);
    i++;
 }
    printf("El resultado es %f", resultado);
}




