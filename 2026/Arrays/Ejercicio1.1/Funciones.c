#include <stdio.h>
#include "Funciones.h"

 void MostrarVctor (int *pvec, int cant)
{
    int i;
    printf ("Los valores del vector son: \n");
    for (i=0;i<cant;i++)
    {
        printf ("%d | ",*pvec++);
    }
}
void MostrarPosiciones (int *pvec, int cant)
{
    int i;
    printf ("\nLas posiciones del vector son: \n");
    for (i=0;i<cant;i++)
    {
        printf ("%d | ",i);
    }
}

void  Verificacion (int pos, int cant)
{
    while ((pos<0)||(pos>cant))
    {
        printf("error, inserte un posicion valida: \n");
        scanf("%d",&pos);
    }
}

void CargarVector(int *pvec, int cant)
{
    int i, num,pos;
    printf("\nInserte el numero que agregar: \n");
    scanf("%d",&num);
    printf("Inserte la posicion donde la quiere agregar: \n");
    scanf("%d",&pos);
    Verificacion(pos, cant);
    for (i=cant;i>pos;i--)
    {
        pvec[i]=pvec[i-1];
    }
    pvec[pos]=num;
    cant++;
}

