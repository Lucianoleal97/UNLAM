#include <stdio.h>
#include<stdlib.h>
#include "Funciones.h"
int main()
{
    int fin=0,cont=0;
    char vect[]={"neuquen"};
    while(fin<1)
    {
        if(vect[cont]!=NULL)
            cont++;
        else
        {
            fin=1;
        }
    }
    MostrarVector(vect,cont);
    Palindromo(vect,cont);

        return 0;
}
