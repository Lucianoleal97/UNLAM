#include <iostream>
float Tolerancia(int x, int TOL);


int main()
{
    int x, TOL;
    float resu;
    printf("ingrese el numero que desea calcular: ");
    scanf("%d",&x);
    printf("ingrese el numero de tolerancia: ");
    scanf("%d",&TOL);
    resu=Tolerancia(x,TOL);
    printf ("El resultado es %f ",resu);
    return 0;
}
