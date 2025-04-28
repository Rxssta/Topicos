#ifndef CLASE_3_H_INCLUDED
#define CLASE_3_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MTAM 10

typedef struct{
    char nom[10];
    int edad;
}Persona;

void cargarElementos(int*, int*, int);
void mostrarElementos(int*, int, int);
int insertarElementoPos(int*, int, int, int*, int);
int insertarElementoAlPrincipio(int*, int, int*, int);
int insertarElementoAlFinal(int*, int, int*, int);
int eliminarElementoPos(int*, int, int*);
int eliminar1raApa(int*, int, int*);
int eliminarTodaApa(int*, int, int*);

#endif // CLASE_3_H_INCLUDED
