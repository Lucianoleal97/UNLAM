#include <stdio.h>
#include <stdlib.h>
#include "../Fecha/Fecha.h"


int main()
{
    Fecha fecha;

    ingresarFecha(&fecha);

    mostrarFecha(&fecha);
    putchar('\n');

    Fecha fSum = fechaSumarDias(&fecha, 90);

    mostrarFecha(&fSum);
    putchar('\n');

    return 0;
}
