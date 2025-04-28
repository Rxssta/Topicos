#include "Clase_2.h"

void ingresarFecha(t_fecha *f)
{
    puts("Ingrese una fecha (D/M/A):");
    scanf("%d/%d/%d", &f->d, &f->m, &f->a);

    while(!esFechaValida(f))
    {
        puts("Ingrese una fecha (D/M/A):");
        scanf("%d/%d/%d", &f->d, &f->m, &f->a);
    }
}

void mostrarFecha(t_fecha *f)
{
    printf("%d/%d/%d\n", f->d, f->m, f->a);
}

bool esFechaValida(const t_fecha *f)
{
    if(f->a >= 1601)
        if(f->m >= 1 && f->m <= 12)
            if(f->d >= 1 && f->d <= cantDiasMes(f->m, f->a))
                return true;

    return false;
}

int cantDiasMes(int m, int a)
{
    int dm[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(m==2 && esBisiesto(a))
        return 29;

    return dm[m-1];
}

bool esBisiesto(int a)
{
    return ((a%4==0 && a%100!=0) || a%400==0);
}

t_fecha sumarDiasFecha(const t_fecha *f, int dias)
{
    t_fecha fSuma = *f;
    int cdm;

    fSuma.d += dias;
    while(fSuma.d > (cdm = cantDiasMes(fSuma.m,fSuma.a)))
    {
        fSuma.d-= cdm;
        fSuma.m+=1;
        if(fSuma.m>12)
        {
            fSuma.m=1;
            fSuma.a+=1;
        }
    }
    return fSuma;
}

int cmpFechas(const t_fecha* f1, const t_fecha* f2)
{
    return (f1->a != f2->a)? f1->a - f2->a:
        ((f1->m != f2->m)?f1->m - f2->m:
        ((f1->d != f2->d)? f1->d - f2->d:
        0));
}

t_fecha restarDiasFecha(const t_fecha *f, int dias)
{
    t_fecha fResta = *f;
    int cdm;

    fResta.d -= dias;
    while(fResta.d < 1 && fResta.d < (cdm = cantDiasMes(fResta.m,fResta.a)))
    {
        fResta.d+= cdm;
        fResta.m-=1;
        if(fResta.m < 1)
        {
            fResta.m=12;
            fResta.a-=1;
        }
    }
    return fResta;
}
