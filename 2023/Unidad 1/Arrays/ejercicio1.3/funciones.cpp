#include <stdio.h>
#include <stdlib.h>
void OrdenarBurbujeo(int vect[], int pos, int cant)
{
    int aux,i,j;
    for(i=pos;i<cant-1;i++)
    {
        if(vect[i]<vect[i+1])
        {
            aux=vect[i];
            vect[i]=vect[i+1];
            vect[i+1]=aux;
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
void EliminarValor(int vect[],int cant)
{
    int pos;
    printf("\ningrese La posicion que desea eliminar: ");
    scanf("%d",&pos);
    vect[pos]=0;
    OrdenarBurbujeo(vect,pos,cant);
}
