#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "cabezera.h"
using namespace std;
int factorial(int n);

int main()
{
    int n;
    printf("ingrese el numero que quiera factorizar: ");
    scanf("%d",&n);
    printf("el factorial de %d es %d",n, factorial(n));
    return 0;
}
