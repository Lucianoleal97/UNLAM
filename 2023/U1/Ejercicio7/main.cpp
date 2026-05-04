#include <iostream>
#include <stdio.h>
#include <string>
#include "funciones.h"


int main()
{
int num,div;
printf("ingrese el numero nautral: ");
scanf("%d",&num);
div=divisores(num);
clasificacion(num,div);
    return 0;
}
