#include "Clase_3.h"

//InsertarElementoAlPrincipio
//InsertarElementoAlFinal
//Eliminar un elemento de una posición
//Eliminar la primera aparición de un elemento, desde el principio
//Eliminar todas las apariciones de un elemento

int main()
{
//    const char *cad = "Hola Mundo";
//    size_t tam = strlen(cad);
//
//    printf("%d\n", sizeof(Persona));
//
//    printf("%d\n", tam);
//    int vec[5] = {0,1,2,3,4}, *p;
//    p = vec;

//    for(p = vec; p < vec + sizeof(vec)/sizeof(vec[0]); p++)
//    {
//        printf("%d ", *p);
//    }

    int vec[MTAM] = {1,1,1,0,1,1,1,1}, ce = 8, tam = sizeof(vec)/sizeof(vec[0]), elem = 1, pos = 8;

//    cargarElementos(vec, &ce, tam);
//    puts("\nEl vector resultante es:\n");
//    mostrarElementos(vec, ce, tam);
    puts("El vector inicial es:");
    mostrarElementos(vec, ce, tam);
    printf("\nLa cantidad de elementos es: %d\n", ce);
//    insertarElementoAlFinal(vec, elem, &ce, tam);
    eliminarTodaApa(vec, elem, &ce);
    puts("El vector resultante es:");
    mostrarElementos(vec, ce, tam);
    printf("\nLa cantidad de elementos es: %d\n", ce);
    return 0;
}
