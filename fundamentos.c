#include <stdio.h>

int main(void)
{
    short edad = 15;
    int a = 10;
    int b = 15;
    float promedio;
    char caracter = 'a';
    char saludo[] = "Hola desde C";

    printf("El tamanho de las variables short : %ld \n", sizeof(short));
    printf("El tamanho de las variables int : %ld \n", sizeof(int));
    printf("El tamanho de las variables long : %ld \n", sizeof(long));
    printf("El tamanho de las variables float : %ld \n", sizeof(float));
    printf("El tamanho de las variables double : %ld \n", sizeof(double));
    printf("El tamanho de las variables char : %ld \n", sizeof(char));
    printf("El tamanho de las variable saludo : %ld \n", sizeof(saludo));

    int c = 0b101110;
    // int c = 0x2E;
    /*
    0 1 2 3 4 .. 9 .. 10 11 12 ...99 - SISTEMA DECIMAL

    0 1  0 1 10 11 100 101 - SISTEMA BINARIO

    0 1 2 ...9 A B C .. F  ->  0x12  = 1*16 + 2*1 = 18
    0 1 2 ... 9 = 18 -> 1*10 + 8*1 = 18
    10010  -> 1*2^4 + 0*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 18
    
    */

    printf("El valor de la variable c es: %x \n", c);
    printf("==Fundamentos de C \n\n");
    printf("Variable saludo : %s \n",saludo);
    printf("Variable a = %d , variable b = %d \n",a,b);

    short num1 = 34;
    short num2 = 35;
    short num3 = 86;
    short num4 = 92;

    if(num1 != num2)
    {
        printf("El valor de num1 es diferente a num2 \n");  
    }
    else
    {
        printf("El valor de num1 no es diferente a num2 \n");
    }

    int contador = 0;
    while(contador < 20)
    {
        printf("El valor de contador es : %i \n", contador);
        contador = contador + 1;
    }
    printf("Salida del bucle while \n");

    for(int numeroImprimir = 0;numeroImprimir <= 20;numeroImprimir++)
    {
        printf("El valor de numeroImprimi es : %d \n", numeroImprimir);
    }
    printf("Se salio del bucle for \n");

    contador = 1;
    do {
        printf("El valor de contador es : %d \n", contador);
        contador = contador + 1;
    }while(contador < 20);
    printf("Se finaliza el ciclo do while \n");

    printf("Esta es una nueva linea \n");

    printf("Nueva modificacion \n");

    printf("Esta nueva linea - desde mi pc personal \n");

    printf("Nuevo commit local \n");

}