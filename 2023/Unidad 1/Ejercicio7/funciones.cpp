#include <stdio.h>
int divisores(int num)
{
    int i,div=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            div=div+i;
        }
    }
    return div;
}
void clasificacion(int num, int div)
{
    if(num==div)
    {
        printf("la suma de los divisores es: %d y por lo tanto su clasificacion es: PERFECTO",div);
    }
    else
    {
        if(num>div)
        {
            printf("la suma de los divisores es: %d y por lo tanto su clasificacion es: DEFICIENTE",div);
        }
        else
        {
            printf("la suma de los divisores es: %d y por lo tanto su clasificacion es: ABUNDANTE",div);
        }
    }

}
