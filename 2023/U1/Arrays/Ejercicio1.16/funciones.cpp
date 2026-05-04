#include <stdio.h>
#include <stdlib.h>
#define TAM 4
void CargaMatriz(int matriz[TAM][TAM])
{
    int i,f;
    printf("ingrese los valores para una matriz de %dx%d\n ",TAM,TAM);
    for (i=0;i<TAM;i++)
    {
        for (f=0;f<TAM;f++)
        {
            printf("valor a [%d][%d] ",i,f);
            scanf("%d",&matriz[i][f]);
        }
    }
}
void MostrarMatriz(int matriz[TAM][TAM])
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
void Trasponer(int matriz[TAM][TAM])
{
    int i,f,aux;
    for (i=0;i<TAM;i++)
    {
        for(f=0+i;f<TAM;f++)
        {
            aux=matriz[f][i];
            matriz[f][i]=matriz[i][f];
            matriz[i][f]=aux;
        }
    }
}
