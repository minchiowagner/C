/*
37. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variáveis
    float valor_prod, valor_desc, desc = 0.12;

    printf("Informe o valor do produto: ");
    scanf("%f", &valor_prod);

    //Condição
    valor_desc = valor_prod -(valor_prod * desc);

    //Resultado
    printf("O produto cujo valor era de R$%.2f, com desconto de 12% resulta num total de R$%.2f\n", valor_prod, valor_desc);

    return 0;
}