#ifndef UNIDADREPASO_H_INCLUDED
#define UNIDADREPASO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define ERROR 0
#define ERROR_0 -1
#define TODO_OK 1


#define PARTE_ENTERA(x) ((int)(x))
#define PARTE_DECIMAL(x) (x)-((int)(x))
#define REDONDEO(x) ((VALOR_ABSOLUTO((x)-((int)(x))))>0.5)?((int)(x))+1:((int)(x))
#define VALOR_ABSOLUTO(x) (((x) >= 0) ? (x) : -(x))
#define CUADRADO(x) (x)*(x)
#define CUBO(x) CUADRADO(x)*(x)
#define MAX(A,B) ((A) > (B) ? (A) : (B))

#define ES_MAYUSCULA(x) ((x)>='A'&&(x)<='Z')
#define ES_MINUSCULA(x) ((x)>='a'&&(x)<='z')
#define ES_NUMERO(x) ((x)>='0'&&(x)<='9')
#define ES_LETRA(x) (((x)>='a'&&(x)<='z')||((x)>='A'&&(x)<='Z'))
#define ES_BLANCO(x) ((x)==' ')

#define MAYUSCULA(x) (ES_MINUSCULA(x)?(x) - 'a' + 'A':(x))

#define FACTORIAL(x) ({                 \
    int fact = 1;                       \
    int i;                              \
    for (i = 2; i <= (x); i++)          \
        fact *= i;                      \
    fact;                               \
})

long long factorial(int);
int combinatoria(int, int);
double potencia(double,int);
double eElevadoX(float, float);
double raizCuadrada(float, float);
int esFibonacci(int);
double senX(double, double);
void suma_y_divisores(int);
int sumasSucesivas(int, int);
int cocienteYResto(int, int);
int sumaPrimerosN(int);
int sumaPrimerosNPares(int);
int sumaPrimerosNParesMenores(int);
int esPrimo(int);

#endif // UNIDADREPASO_H_INCLUDED
