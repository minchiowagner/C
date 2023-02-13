/*
12. . Leia uma distancia em milhas e apresente-a convertida em quilômetros. A fórmula de conversão é: K = 1, 61 ∗ M, sendo K a distancia em quilômetros e M em milhas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    
    //Variáveis
    float M, K;
    printf("Informe a distância em milhas: ");

    //Condição
    scanf("%f", &M);
    K = 1.61 * M;

    //Resultado
    printf("A distancia %.2f em milhas convertida para quilômetros é de %.2fkm\n", M, K);

    return 0;
}