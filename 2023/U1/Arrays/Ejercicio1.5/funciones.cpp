#include <stdio.h>
#include <stdlib.h>
void OrdenarBurbujeo(int vect[], int pos, int cant)
{
    int aux,i,j;
    for(i=pos;i<cant-1;i++)
    {
        if((vect[i]<vect[i+1])||(vect[i]==0))
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
    int i,val,cont=-1;
    printf("\ningrese el valor que desea eliminar: ");
    scanf("%d",&val);
    for(i=0;i<cant;i++)
    {
        if(vect[i]==val)
        {
            cont=i;
            if(cont!=-1)
            {
                vect[cont]=0;
                OrdenarBurbujeo(vect,cont,cant);
            }
        }
    }
}
