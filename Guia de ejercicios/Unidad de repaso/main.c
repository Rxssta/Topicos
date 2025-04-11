#include "UnidadRepaso.h"

int main()
{
    float x = 3.05, a = 13;
    double y = 3.1415926535897932;
    int m = 5, n = 13;
//    char c = '5';
//    printf("La parte entera de %.2f es : %d\n", x, PARTE_ENTERA(x));
//    printf("La parte decimal de %.2f es : %.2f\n", x, PARTE_DECIMAL(x));
//    printf("El redondeo de %.2f es : %d\n", x, REDONDEO(x));
//    printf("El valor absoluto de %.2f es : %.2f\n", x, VALOR_ABSOLUTO(x));
//    printf("La variable c es mayuscula? %d\n", ES_MAYUSCULA(c));
//    printf("La variable c es minuscula? %d\n", ES_MINUSCULA(c));
//    printf("La variable c es numero? %d\n", ES_NUMERO(c));
//    printf("La variable c es letra? %d\n", ES_LETRA(c));
//    printf("La factorial de %d es: %d\n", a, FACTORIAL(a));
//    printf("La cuadrado de %d es: %d\n", a, CUADRADO(a));
//    printf("La cubo de %d es: %d\n", a, CUBO(a));
    printf("El factorial de %d es: %lld\n", m, factorial(m));

    printf("La combinatoria de %d y %d es: %d\n", m, n, combinatoria(m, n));

    printf("%d^%d es: %lf\n", m, n, potencia(m,n));

    printf("e^%.1f es: %.3lf\n", a, eElevadoX(a, 0.0001));

    printf("La raiz cuadra de %.2f es: %.3lf\n", x, raizCuadrada(x, 0.01));

    if(esFibonacci(m))
        printf("El numero %d pertenece a la serie de Fibonacci\n", m);
    else
        printf("El numero %d no pertenece a la serie de Fibonacci\n", m);

    printf("El seno de %f es: %.20lf\n", y, senX(y, 0.0000000000000001));

    suma_y_divisores(m);

    printf("El resultado de %d * %d es: %d\n", m, n, sumasSucesivas(m, n));

    cocienteYResto(m,n);

    printf("La suma de los primeros %d naturales es: %d\n", n, sumaPrimerosN(n));

    printf("La suma de los primeros %d naturales pares es: %d\n", n, sumaPrimerosNPares(n));

    printf("La suma de los primeros %d naturales pares menores es: %d\n", n, sumaPrimerosNParesMenores(n));

    if(esPrimo(n))
        printf("El numero %d es Primo\n", n);
    else
        printf("El numero %d no es Primo\n", n);

    return 0;
}
