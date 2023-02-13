/*
41. Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação de acordo com a tabela abaixo:

IMC                 CLASSIFICAÇÃO
< 18.5              Abaixo do Peso
18.6 a 24.9         Saudável
25.0 a 29.9         Peso em excesso
30.0 a 34.9         Obesidade Grau I
35.0 a 39.9         Obesidade Grau II (Severa)
>= 40.0             Obesidade Grau III (Mórbida)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DECLARANDO AS VARIÁVEIS
    float peso, altura, imc;

    // SOLICITANDO AO USUARIO QUE INFORME O PESO E ALTURA
    printf("Digite o seu peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite a sua altura (em m): ");
    scanf("%f", &altura);

    // CALCULANDO O IMC
    imc = peso / (altura * altura);

    // CONDIÇÕES
    if (imc < 18.5)
    {
        printf("Seu IMC é: %.2f.\n", imc);
        printf("Classificação: Abaixo do Peso.\n");
    }
    else if (imc >= 18.6 && imc <= 24.9)
    {
        printf("Seu IMC é: %.2f.\n", imc);
        printf("Classificação: Saudável.\n");
    }
    else if (imc >= 25.0 && imc <= 29.9)
    {
        printf("Seu IMC é: %.2f.\n", imc);
        printf("Classificação: Peso em excesso.\n");
    }
    else if (imc >= 30.0 && imc <= 34.9)
    {
        printf("Seu IMC é: %.2f.\n", imc);
        printf("Classificação: Obesidade Grau I.\n");
    }
    else if (imc >= 35.0 && imc <= 39.9)
    {
        printf("Seu IMC é: %.2f.\n", imc);
        printf("Classificação: Obesidade Grau II (Severa).\n");
    }
    else
    {
        printf("Seu IMC é: %.2f.\n", imc);
        printf("Classificação: Obesidade Grau III (Mórbida).\n");
    }

    return 0;
}