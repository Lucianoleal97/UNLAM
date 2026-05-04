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

//            matriz[i][f]=0;
            matriz[i][f]=i+f;
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
void EsSimetrica(int matriz[TAM][TAM])
{
    int i,f,error=0;
    for (i=0;i<TAM;i++)
    {
        for(f=1+i;f<TAM;f++)
        {
            if(matriz[i][f]!=matriz[f][i])
            {
                error++;
            }
        }
    }
    if (error==0)
    {
        printf("Es una matriz simetrica");

    }
    else
    {
        printf("No es una matriz simetrica");
    }
    //printf("La suma es: %d",sum);
}
