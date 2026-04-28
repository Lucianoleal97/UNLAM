#include "cabezera.h"
int factorial(int n)
{
     int i,resultado=1;
     for(i=1;n>=i;i++)
    {
       resultado*=i;
    }
return resultado;
}
