#include "Unidad_1.h"

void mostrarVec(int *v, int c)
{
    int *i;
    for(i = v; i < v + c; i++)
        printf("%d ", *i);
    printf("Con %d elementos\n", c);
}

int insertarNPos(int *v, int n, int pos, int *ce)
{
    if((pos < 1))
        return ERROR;

    int i = 0, *posAct = v;

    while(i < pos-1)
    {
        posAct++;
        i++;
    }

    *posAct = n;
    *ce+=1;

    return TODO_OK;
}

int insertarOrdenado(int* v, int n, size_t max, int *ce)
{
    int *ini = v, *ult= v + *ce;
    if(*(ce) == max)
    {
        while((ini < ult) && (*ini < n))
        ini++;

        while(ult >= ini)
        {
            *ult = *(ult - 1);
            ult--;
        }

        *ini = n;
        *ce += 1;
    }
    else
    {
        while((ini < ult) && (*ini < n))
        ini++;

        while(ult >= ini)
        {
            *(ult + 1) = *(ult);
            ult--;
        }

        *ini = n;
        *ce += 1;
    }

    return TODO_OK;
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

int esPalindromo(char* cad)
{
    char *p1 = cad, *p2 = cad;

    while(*p2 != '\0')
        p2++;

    p2--;

    while(p1 < p2)
    {
        while(!ES_LETRA(*p1))
            p1++;
        while(!ES_LETRA(*p2))
            p2--;

        if(MAYUSCULA(*p1) != MAYUSCULA(*p2))
            return 0;

        p1++;
        p2--;
    }

    return 1;
}

int aEntero(char* cad)
{
    char* c = cad;
    int dig = 0, num = 0, base = 1;

    while(*c != '\0')
    {
        c++;
        dig++;
    }

    c--;

    while(dig)
    {
        num += (*c - '0') * base;
        base *= 10;
        dig--;
        c--;
    }

    return num;
}
