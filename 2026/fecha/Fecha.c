#include <stdio.h>
#include "Fecha.h"


int cantDiasMes(int mes, int anio);
bool esBisesto(int anio);


// Primitivas

bool fechaSet(Fecha* f, int dia, int mes, int anio)
{
    if(!esFechaValida(dia, mes, anio))
    {
        return false;
    }

    f->dia = dia;
    f->mes = mes;
    f->anio = anio;

    return true;
}


void fechaGet(const Fecha* f, int* dia, int* mes, int* anio)
{
    *dia = f->dia;
    *mes = f->mes;
    *anio = f->anio;
}


Fecha fechaSumarDias(const Fecha* f, int dias)
{
    Fecha fSuma = *f;
    fSuma.dia += dias;
    int cdm;

    while(fSuma.dia > (cdm = cantDiasMes(fSuma.mes, fSuma.anio)))
    {
        fSuma.dia -= cdm;
        fSuma.mes++;

        if(fSuma.mes > 12)
        {
            fSuma.mes = 1;
            fSuma.anio++;
        }
    }

    return fSuma;
}



// No Primitivas

void ingresarFecha(Fecha* f)
{
    int dia, mes, anio;

    puts("Ingrese una fecha (D/M/A):");
    scanf("%d/%d/%d", &dia, &mes, &anio);

    while(!fechaSet(f, dia, mes, anio))
    {
        puts("Fecha invalida. Ingresela de nuevo (D/M/A):");
        scanf("%d/%d/%d", &dia, &mes, &anio);
    }
}


void mostrarFecha(const Fecha* f)
{
    int dia, mes, anio;

    fechaGet(f, &dia, &mes, &anio);

    printf("%02d/%02d/%04d", dia, mes, anio);
}


bool esFechaValida(int dia, int mes, int anio)
{
    if(anio < 1601)
    {
        return false;
    }

    if(mes < 1 || mes > 12)
    {
        return false;
    }

    if(dia < 1 || dia > cantDiasMes(mes, anio))
    {
        return false;
    }

    return true;
}


int cantDiasMes(int mes, int anio)
{
    int cdm[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(mes == 2 && esBisesto(anio))
    {
        return 29;
    }

    return cdm[mes];
}


bool esBisesto(int anio)
{
    return anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0);
}
