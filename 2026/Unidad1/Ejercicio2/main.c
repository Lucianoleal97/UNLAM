#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    m= IngresarNumero();
    n= IngresarNumero();
    Verificacion(&m, &n);
    CalculoCombinatorio(m, n);
    /*funciona bien, cuando falla la verificacion y reigresas otros numero.
    si elegis los numero correctos desde el principio hace mal el calculo*/
    /*El resultado cuando falla la verificacion es 3, sin error de verificacion es 0*/
    return 0;
}
