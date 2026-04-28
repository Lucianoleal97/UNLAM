#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 6
int main()
{
    int vect[TAM]={5,10,15,20,25,30},*pvect;
    pvect=vect;
    MostrarVector(pvect,TAM);
    CargarValor(pvect,TAM);
    MostrarVector(pvect,TAM);
    return 0;
}
