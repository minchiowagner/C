/*
8. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
fórmula de conversão é: C = K − 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    //Variáveis
    float K, C;
    printf("Informa a temperatura em Kelvin: ");

    //Condição
    scanf("%f", &K);
    C = K - 273.15;

    //Resultado
    printf("A temperatura em %.2f em graus Kelvin convertida para graus Celsius é %.2f\n.", K, C);

    return 0;
}