/*
14. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é: R = G * π/180, sendo G o ângulo em graus e R em radianos e π = 3.14.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    //Variáveis
    float G, R, pi = 3.14;

    printf("Informe o ângulo em graus: ");

    //Condição
    scanf("%f", &G);
    R = G * pi/180;

    //Resultado
    printf("O angulo em radianos é: %.2f\n", R);

    return 0;
}