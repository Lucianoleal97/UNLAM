#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 8
int main()
{
    int vect[TAM]= {5,1,9,5,4,2,3,6};
    MostrarVector(vect, TAM);
    OrdenarVector(vect,TAM);
    CargarDato(vect,TAM);
    MostrarVector(vect, TAM);
    return 0;
}
