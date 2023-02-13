/*
13. Leia a distância em quilômetros e apresete-a convertida em milhas. A fórmula de conversão é: M = K/1,61 , sendo K a distância em quilômetros e M em milhas
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    //Variáveis
    float K, M;
    printf("Informe a distância em quilômetros: ");

    //Condição
    scanf("%f", &K);
    M = K/1.61;

    //Resultado
    printf("A distância %.2fkm convertida para milhas é de %.2f\n", K, M);

    return 0;
}