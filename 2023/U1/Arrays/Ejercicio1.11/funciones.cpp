#include <stdio.h>
#include <stdlib.h>
#define TAM 4
void CargaMatriz(int matriz[TAM][TAM])
{
    int i,f;
    for (i=0;i<TAM;i++)
    {
        for (f=0;f<TAM;f++)
        {
            matriz[i][f]=i+f;
        }
    }
}
void MostrarMatriz (int matriz[TAM][TAM])
{
    int i,f;
    for (i=0;i<TAM;i++)
    {
        printf("|");
        for (f=0;f<TAM;f++)
        {
            printf(" %d |",matriz[i][f]);
        }
        printf("\n");
    }
}
void SumaDiagonal(int matriz[TAM][TAM])
{
    int i,sum=0;
    for (i=0;i<TAM;i++)
    {
        sum=sum+matriz[i][i];
    }
    printf("La suma es: %d",sum);
}
