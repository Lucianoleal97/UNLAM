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

            matriz[i][f]=0;
//            matriz[i][f]=i+f;
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
void EsIdentidad(int matriz[TAM][TAM])
{
    int i,f,sum=0,id=0;
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
    for (i=0;i<TAM;i++)
    {
        id=id+matriz[i][i];
    }


    if ((sum==0)&&(id==TAM))
    {
        printf("Es una matriz identidad");

    }
    else
    {
        printf("No es una matriz identidad");
    }
    //printf("La suma es: %d",sum);
}
