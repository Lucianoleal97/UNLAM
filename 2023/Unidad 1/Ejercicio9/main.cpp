#include <iostream>
#include <stdio.h>
#include "funciones.h"

int main()
{
int a,b;
printf("ingrese un numero natural: ");
scanf("%d",&a);
printf("ingrese otro numero natural: ");
scanf("%d",&b);
verificar(a,b);
cociente(a,b);
resto(a,b);
    return 0;
}
