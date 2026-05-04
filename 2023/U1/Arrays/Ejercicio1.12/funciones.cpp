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

            //matriz[i][f]=0;
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
void EsDiagonal(int matriz[TAM][TAM])
{
    int i,f,sum=0;
    for (i=0;i<TAM;i++)
    {
        for(f=1+i;f<TAM;f++)
        {
            sum=sum+matriz[i][f];
        }
    }
    for (i=1;i<TAM;i++)
    {
        for(f=0;f<i;f++)
        {
            sum=sum+matriz[i][f];
        }
    }
    if (sum!=0)
    {
        printf("No es una matriz diagonal");
    }
    else
    {
        printf("Es una matriz diagonal");
    }
    //printf("La suma es: %d",sum);
}
