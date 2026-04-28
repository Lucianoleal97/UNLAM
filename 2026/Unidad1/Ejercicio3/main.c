#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    double x,TOL;
    x= IngresarNumero();
    TOL= IngresarNumero();
    Verificacion(&TOL);
    Calculo(&x,&TOL);
    return 0;
}
