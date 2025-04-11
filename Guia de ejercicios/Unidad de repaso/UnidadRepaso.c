#include "UnidadRepaso.h"

long long  factorial(int x)
{
    int fact = 1;
    int i;
    for (i = 2; i <= x; i++)
        fact *= i;
    return fact;
}

int combinatoria(int m, int n)
{
    if((m >= n) && (n >= 0))
        return factorial(m)/(factorial(n)*factorial(m-n));
    else
        return ERROR;
}

double potencia(double n,int x)
{
    int resultado = 1, i;
    for(i = 0; i < x; i++)
        resultado *= n;

    return resultado;
}

double eElevadoX(float x, float tol)
{
    int i = 1;
    double resultado = 1;

    while(tol < ((float)(potencia(x,i))/factorial(i)))
    {
        resultado += ((float)potencia(x,i))/factorial(i);
        i++;
    }

    return resultado;
}

double raizCuadrada(float x, float tol)
{
    if(x<=0)
        return ERROR;

    double anterior = 1, actual = 0.5 * (anterior + x / anterior);

    while(VALOR_ABSOLUTO(actual-anterior)>= tol)
    {
        anterior = actual;
        actual = 0.5 * (anterior + x / anterior);
    }

    return actual;
}

int esFibonacci(int n)
{
    int anterior = 0, actual = 1, fibo = 0;

    while(fibo < n)
    {
        fibo = anterior + actual;
        anterior = actual;
        actual = fibo;
    }
    if(fibo == n)
        return TODO_OK;
    else
        return ERROR;
}

double senX(double x, double tol)
{
//    int i = 3, neg = -1;
//    double resultado = x, termino = (potencia(x, i) / factorial(i)) * neg;
//
//    while(tol < VALOR_ABSOLUTO(termino))
//    {
//        resultado += termino;
//        i += 2;
//        neg *= -1;
//        termino = (potencia(x, i) / factorial(i)) * neg;
//    }
//
//    return resultado;
    double resultado = x;
    double termino = x;
    int i = 1;

    while (VALOR_ABSOLUTO(termino) >= tol)
    {
        termino *= -x * x / ((2 * i) * (2 * i + 1));
        resultado += termino;
        i++;
    }

    return resultado;
}

void suma_y_divisores(int n)
{
    int i, div = 0;
    for(i = n-1; i > 0; i--)
    {
        div += (n % i == 0)?i:0;
    }
    if(div == n)
        printf("PERFECTO\n");
    else if (div < n)
            printf("DEFICIENTE\n");
        else
            printf("ABUNDANTE\n");
}

int sumasSucesivas(int n1, int n2)
{
    if(!n1||!n2)
        return 0;
    int i, resultado = 0, signo = 1;

    if ((n1 < 0 && n2 > 0) || (n1 > 0 && n2 < 0))
        signo = -1;;
    for(i = 0;i < VALOR_ABSOLUTO(n1); i++)
        resultado += VALOR_ABSOLUTO(n2);

    return signo * resultado;
}

int cocienteYResto(int n1, int n2)
{
    if(!n2)
        return ERROR_0;

    printf("El cociente de %d y %d es: %d\nEl resto de %d y %d es: %d\n", n1, n2, n1/n2, n1, n2, n1%n2);

    return TODO_OK;
}

int sumaPrimerosN(int n)
{
    int i, resultado = 0;
    for(i = 1; i <= n; i++)
        resultado += i;
    return resultado;
}

int sumaPrimerosNPares(int n)
{
    int i = 2, resultado = 0;
    while(i <= n)
    {
        resultado += i;
        i += 2;
    }

    return resultado;
}

int sumaPrimerosNParesMenores(int n)
{
    int i = 2, resultado = 0;
    while(i < n)
    {
        resultado += i;
        i += 2;
    }

    return resultado;
}

int esPrimo(int n)
{
    if(n < 1)
        return ERROR;

    int i, div = 0;

    for(i = n-1; i > 0; i--)
        div += (n % i == 0)?1:0;

    if(div > 2)
        return ERROR;
    else
        return TODO_OK;
}
