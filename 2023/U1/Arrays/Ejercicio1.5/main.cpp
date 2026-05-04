#include <stdio.h>
#include<stdlib.h>
#include "funciones.h"
#define TAM 6
int main()
{
    int vect[]={5,10,15,10,25,10};
    MostrarVector(vect,TAM);
    EliminarValor(vect,TAM);
    MostrarVector(vect,TAM);
    return 0;
}
