#include "Clase_2.h"

void intercambiar(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(int argc, char *argv[]) //char**argv
{
//    int x = 8, y = 5, i, *p, a = 5, b = 8;

//    t_persona pepe;

//    t_persona *pe = &pepe;

//    t_fecha *puntero; //4 bytes

    t_fecha fInicio, fSuma, fResta;
    ingresarFecha(&fInicio);
    fSuma = sumarDiasFecha(&fInicio, 90);
    puts("Fecha ingresada\n");
    mostrarFecha(&fInicio);
    puts("Fecha resultante\n");
    mostrarFecha(&fSuma);
    fResta = restarDiasFecha(&fInicio, 20);
    puts("Fecha resultante\n");
    mostrarFecha(&fResta);


//    (x>y)?printf("El valor de x vale: %d",++x):printf("El valor de y vale: %d",y*5);

//    for(i=0; i<argc; i++)
//        printf("Parametro %d= %s\n", i, argv[i]);


//    p = &x; //p se carga con la direccion de x, es decir, p apunta a x

//    *p = 20; // modifico el contenido de lo que apunta p

//    printf("El contenido de lo que apunta el puntero: %d\n",*p);
//    printf("la direccion a la que apunta el puntero: %p\n", p);
//    printf("la direccion de x: %p\n", &x);
//    printf("la direccion de p: %p\n", &p);

//    scanf("%d", &a);

//    printf("Antes de intercambiar a: %d, b: %d\n", a, b);
//    intercambiar(&a, &b);
//    printf("Despues de intercambiar a: %d, b: %d\n", a, b);

//    pepe.edad = 20;
//    pepe.dni = 45632568;
//    pepe.legajo = 101;

//    printf("Edad: %d\n", pepe.edad);
//    printf("Dni: %d\n", pepe.dni);
//    printf("Legajo: %d\n", pepe.legajo);

//    (*pe).dni = 123456789;
//    pe->dni = 156789;

//    printf("Edad: %d\n", pepe.edad);
//    printf("Dni: %d\n", pepe.dni);
//    printf("Legajo: %d\n", pepe.legajo);

    return 0;
}
