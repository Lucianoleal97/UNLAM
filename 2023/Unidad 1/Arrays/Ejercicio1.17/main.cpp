#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 3


int main()
{
 int matriz[TAM][TAM],matriz2[TAM][TAM];
 CargaMatriz(matriz);
 CargaMatriz(matriz2);
 printf("matriz 1:\n");
 MostrarMatriz(matriz);
 printf("matriz 2:\n");
 MostrarMatriz(matriz2);
 MultiMatriz(matriz,matriz2);

    return 0;
}
