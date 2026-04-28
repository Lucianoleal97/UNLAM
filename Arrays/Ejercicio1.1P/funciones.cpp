#include <stdio.h>
#include <stdlib.h>
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
int CargarDato(int *pvect, int cant)
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
        pvect[pos]=num;
    }
    pvect[pos]=num;
    for(i=0;i<8;i++)
        {
            printf("| %d ",*pvect++);
        }
        printf("|");
}
