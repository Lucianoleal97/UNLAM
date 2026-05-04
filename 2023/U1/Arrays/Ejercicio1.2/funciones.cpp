#include <stdio.h>
#include <stdlib.h>
void OrdenarBurbujeo(int vect[], int num, int cant)
{
    int aux,i,j;
    for(i=0;i<cant;i++)
    {
        if(vect[i]>num)
        {
            aux=vect[i];
            vect[i]=num;
            num=aux;
        }
    }
}

void MostrarVector(int vect[],int cant)
{
    int i;
    printf("El valor del vector es: \n|");
    for(i=0;i<cant;i++)
    {
        printf(" %d |",vect[i]);
    }
    printf("\nLa posicion del vector es: \n|");
    for(i=0;i<cant;i++)
    {
        printf("% d |",i);
    }
}
void CargarValor(int vect[],int cant)
{
    int num;
    printf("\ningrese el nuevo valor: ");
    scanf("%d",&num);
    OrdenarBurbujeo(vect,num,cant);
}
