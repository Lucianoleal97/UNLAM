#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 4


int main()
{
 int matriz[TAM][TAM];
 CargaMatriz(matriz);
 MostrarMatriz(matriz);
 SumaDiagonal(matriz);
    return 0;
}
