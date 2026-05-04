#include <stdio.h>
#include <stdlib.h>
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
int CargarDato(int vect[], int cant)
{
    int i,num,pos;
    printf("\ninserte un valor entero: ");
    scanf("%d",&num);
    printf("elija en que pocion: ");
    scanf("%d",&pos);
    while((pos>cant)||(pos<0))
    {
        printf("error la posicion no puede ser menor a 0 o mayor a %d\n",cant);
        scanf("%d",&pos);
        vect[pos]=num;
    }
    vect[pos]=num;
    for(i=0;i<8;i++)
        {
            printf("| %d ",vect[i]);
        }
        printf("|");
}
