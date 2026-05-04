#include <stdio.h>
void MostrarVector(char vect[], int cont)
{
    int i;
    for(i=0;i<cont;i++)
    {
        printf(" %c -> %c \n",vect[i],vect[cont-i-1]);
    }
}
void Palindromo (char vect[],int cont)
{
    int i,error=0;
    for(i=0;i<cont;i++)
    {
        if(vect[i]==vect[cont-i-1])
        {
            error=1;
        }
    }
    if(error==1)
    {
        printf("Es palimdromo");
    }
    else
    {
        printf("no es palindromo");
    }
}
