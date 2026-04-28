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
}
void CargarDato(int vect[], int cant)
{
    int i=0,j,num;
    printf("\nInserte el numero que quiere agregar: ");
    scanf("%d",&num);
    while(i<cant && vect[i]<num)
      {
        i++;
      }
    for (j=cant;j>i;j--)
    {
        vect[j]=vect[j-1];
    }
    vect[i]=num;
}

void OrdenarVector (int vect[], int cant)
{
 int i,j,num;
 for (i=0;i<cant;i++)
 {
     for(j=0;j<cant;j++)
     {
         if(vect[j]>vect[j+1])
         {
            num=vect[j+1];
            vect[j+1]=vect[j];
            vect[j]=num;
         }
     }
 }
}
