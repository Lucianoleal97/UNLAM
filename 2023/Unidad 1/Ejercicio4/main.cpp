#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main()
{
    float ria=1,div,sum;
    int A,TOL;
    printf("ingrese el numero que desea calcular: ");
    scanf("%d",&A);
    printf("ingrese el numero de tolerancia: ");
    scanf("%d",&TOL);
    if(A>=0)
    {
        while(ria<TOL)
        {
//            ri=1/2(ria+(A/ria));
            div=A/ria;
            sum=ria+div;
            ria=sum/2;
//            printf("%.2f",ria);
        }
        printf("el resutaldo es %2f, y la tolerancia fue %d", ria,TOL);
    }
    else
    {
        printf("El numero no puede ser negativo. ");
    }
   return 0;
}
