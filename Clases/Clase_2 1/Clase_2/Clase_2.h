#ifndef CLASE_2_H_INCLUDED
#define CLASE_2_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int t_entero;

typedef struct
{
    int edad;
    int dni;
    int legajo;
}t_persona;

typedef struct
{
    int d;
    int m;
    int a;
}t_fecha;

void ingresarFecha(t_fecha *f);
void mostrarFecha(t_fecha *f);
bool esFechaValida(const t_fecha *f);
int cantDiasMes(int m, int a);
bool esBisiesto(int a);

t_fecha sumarDiasFecha(const t_fecha *f, int dias);
t_fecha restarDiasFecha(const t_fecha *f, int dias);

#endif // CLASE_2_H_INCLUDED
