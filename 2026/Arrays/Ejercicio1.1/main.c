#include <stdio.h>
#include <stdlib.h>
#define TAM 8
int main()
{
   int i, vector[TAM] = {1,2,3,4};
    MostrarVctor (vector,TAM);
    MostrarPosiciones(vector,TAM);
    CargarVector(vector,TAM);
    MostrarVctor (vector,TAM);
    return 0;
}
