#include <stdio.h>
void primo(int a)
{
    int i,cont=0;
    for(i=1;a>=i;i++)
    {
        if(a%i==0)
        {
            cont++;
        }
    }
    if(cont==2)
    {
        printf("el numero %d es un numero primo",a);
    }
    else
    {
        printf("el numero %d no es un numero primo",a);
    }
}
