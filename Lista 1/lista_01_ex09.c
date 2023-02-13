/*
9. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
fórmula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    //Variáveis
    float C, K;
    printf("Informe a temperatura em graus Celsius: ");

    //Condição
    scanf("%f", &C);
    K = C + 273.15;

    //Resultado
    printf("A temperatura %.2f em graus Celsius convertida para graus Kelvin é %.2f\n", C, K);

    return 0;
}