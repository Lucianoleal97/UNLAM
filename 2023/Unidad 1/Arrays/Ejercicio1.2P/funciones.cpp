#include <stdio.h>
#include <stdlib.h>
void OrdenarBurbujeo(int *pvect, int num, int cant)
{
    int aux,i,j;
    for(i=0;i<cant;i++)
    {
        if(pvect[i]>num)
        {
            aux=pvect[i];
            pvect[i]=num;
            num=aux;
        }
    }
}

void MostrarVector(int *pvect,int cant)
{
    int i;
    printf("El valor del vector es: \n|");
    for(i=0;i<cant;i++)
    {
        printf(" %d |",*pvect++);
    }
    printf("\nLa posicion del vector es: \n|");
    for(i=0;i<cant;i++)
    {
        printf("% d |",i);
    }
}
void CargarValor(int *pvect,int cant)
{
    int num;
    printf("\ningrese el nuevo valor: ");
    scanf("%d",&num);
    OrdenarBurbujeo(pvect,num,cant);
}
