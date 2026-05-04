#include <stdio.h>
#include <stdlib.h>
float Tolerancia(int x, int TOl);
int Potencia(int x, int y);
int main()
{
    int x,TOL,resu=1,i;
    printf("ingrese el primer valor: ");
    scanf("%d",&x);
    printf("ingrese el valor de tolerancia: ");
    scanf("%d",&TOL);
    resu=Tolerancia(x,TOL);
    printf("el resultado es: %d",resu);

    return 0;
}

