/*
27. Leia um valor de area em hectares e apresente-o convertido em metros quadrados m². A fórmula de conversão é: M = H ∗ 10000, sendo M a area em metros quadrados é H a area em hectares.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    //Variáveis
    float H, M;
    printf("Informe um valor de área em hectares: ");

    //Condição
    scanf("%f", &H);
    M = H * 10000;

    //Resultado
    printf("O valor de área em hectares convertido para metros quadrados é %.2fm²\n", M);

    return 0;
}