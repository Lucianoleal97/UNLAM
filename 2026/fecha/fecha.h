#ifndef FECHA_H
#define FECHA_H

#include <stdbool.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
} Fecha;

// Primitivas
bool fechaSet(Fecha* f, int dia, int mes, int anio);
void fechaGet(const Fecha* f, int* dia, int* mes, int* anio);
Fecha fechaSumarDias(const Fecha* f, int dias);

// No primitivas
void ingresarFecha(Fecha* f);
void mostrarFecha(const Fecha* f);
bool esFechaValida(int dia, int mes, int anio);

#endif
