#ifndef UNIDAD_1_H_INCLUDED
#define UNIDAD_1_H_INCLUDED

#include "..\Unidad de repaso\UnidadRepaso.h"

void mostrarVec(int*, int);

int insertarOrdenado(int*, int, size_t, int*);
int insertarElementoPos(int*, int, int, int*, int);
int insertarElementoAlPrincipio(int*, int, int*, int);
int insertarElementoAlFinal(int*, int, int*, int);
int eliminarElementoPos(int*, int, int*);
int eliminar1raApa(int*, int, int*);
int eliminarTodaApa(int*, int, int*);

int esPalindromo(char*);
int aEntero(char*);

#endif // UNIDAD_1_H_INCLUDED
