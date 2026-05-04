#include <stdio.h>
int fibonachi(int num)
    {
    int a=1,b=1,si=0;
    while(num>a)
       {
        a=a+b;
        b=a+b;
        if((num==a)||(num==b))
           {
               si=1;
           }
       }
    return si;
    }

int mostrarResultado(int resf, int num)
{
    if(resf==1)
        {
           printf("El numero %d pertenece a la serie de fobinachi ",num);
        }
    else
        {
           printf("El numero %d  no pertenece a la serie de fobinachi ",num);
        }
}
