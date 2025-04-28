#include "Clase_3.h"

void cargarElementos(int* vec, int* ce, int tam)
{
    puts("ingrese cantidad de elementos del vector:");
    scanf("%d", ce);
    if(*ce <= tam)
    {
        int i, *p=vec;
        for(i=0; i < *ce; i++)
        {
            printf("Ingresar un numero: \n");
            scanf("%d", p);
            p++;
        }
    }
}

void mostrarElementos(int* vec, int ce, int tam)
{
    int i, *p = vec;
    for(i = 0; i < ce; i++)
    {
        printf("%d ", *p);
        p++;
    }
}

int insertarElementoPos(int* vec, int pos, int elem, int* ce, int tam)
{
    if(pos>tam)
    {
        puts("Error, Posision invalida");
        return 0;
    }

    int *pact = vec + pos - 1, *ult = vec + *ce - 1;
    if(*ce == tam)
    {
        while(ult>pact)
        {
            *ult = *(ult - 1);
            ult--;
        }
        *pact = elem;

    }
    if(*ce < tam)
    {
        while(ult>=pact)
        {
            *(ult+1) = *ult;
            ult--;
        }
        *pact = elem;
        *ce += 1;
    }
    return 1;
}

int insertarElementoAlPrincipio(int* vec, int elem, int* ce, int tam)
{
    int *ult = vec + *ce - 1;

    if(*ce == tam)
    {
        while(ult>vec)
        {
            *ult = *(ult - 1);
            ult--;
        }
        *vec = elem;
    }
    if(*ce < tam)
    {
        while(ult>=vec)
        {
            *(ult+1) = *ult;
            ult--;
        }
        *vec = elem;
        *ce += 1;
    }
    return 1;
}

int insertarElementoAlFinal(int* vec, int elem, int* ce, int tam)
{
    int *ult = vec + *ce;

    if(*ce == tam)
    {
        puts("Error, Vector lleno\n");
        return 0;
    }

    *ult = elem;
    *ce += 1;

    return 1;
}

int eliminarElementoPos(int* vec, int pos, int* ce)
{
    if(pos > *ce || pos < 1)
    {
        puts("Error, posicion invalida");
        return 0;
    }

    int *pact = vec + pos - 1, *ult = vec + *ce - 1;

    while(pact < ult)
    {
        *pact = *(pact+1);
        pact++;
    }

    *ce -= 1;

    return 1;
}

int eliminar1raApa(int* vec, int elem, int* ce)
{
    int *ult = vec + *ce;

    while(vec < ult && *vec != elem)
        vec++;

    if(*vec == elem)
    {
        while(vec < ult)
        {
            *vec = *(vec+1);
            vec++;
        }
        *ce -= 1;
    }
    return 1;
}

int eliminarTodaApa(int* vec, int elem, int* ce)
{
    int *pe = vec, *pl = vec, *ult = vec + *ce;

    while(pl < ult)
    {
        if(*pl == elem)
        {
            pl++;
            *ce -= 1;
        }
        else
        {
            *pe = *pl;
            pe++;
            pl++;
        }
    }

    return 1;
}























