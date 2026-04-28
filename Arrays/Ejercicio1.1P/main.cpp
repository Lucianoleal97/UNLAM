#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 8
int main()
{
    int vect[8]={5,1,9,5,4,2}, *pvec;
    pvec=vect;
    MostrarVector(pvec,TAM);
    CargarDato(pvec,TAM);
    return 0;
}
