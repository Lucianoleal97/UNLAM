#include <stdio.h>
#include <stdlib.h>
#define TAM 3
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

void MultiMatriz(int matriz[TAM][TAM],int matriz2[TAM][TAM])
{
    int i,f,k,matrizresu[TAM][TAM],aux=0;
    for (i=0;i<TAM;i++)
    {
        for(f=0;f<TAM;f++)
        {
            for(k=0;k<TAM;k++)
            {
                aux=aux+matriz[i][k]*matriz2[k][f];
            }
            matrizresu[i][f]=aux;
            aux=0;
        }
    }
    printf("Resultado de la matriz: \n");
    MostrarMatriz(matrizresu);
}

