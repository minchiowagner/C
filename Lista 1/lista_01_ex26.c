/*
26. Leia um valor de area em metros quadrados m² e apresente-o convertido em hectares. A fórmula de conversão é: H = M ∗ 0.0001, sendo M a area em metros quadrados é H a area em hectares.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    //Variáveis
    float M, H;
    printf("Informe ume valor de área em metros quadrados: ");

    //Condição
    scanf("%f", &M);
    H = M * 0.0001;

    //Resultado
    printf("O valor de área em metros quadrados convertido em hectares é %.2f\n", M);

    return 0;
}