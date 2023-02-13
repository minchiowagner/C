/*
18. Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (as básicas, por exemplo). Um usuário escolhe uma das opções e o seu programa então pede dois valores numericos e realiza a operação, mostrando o resultado e saindo.
*/

#include <stdio.h>

int main()
{   
    // DECLARANDO AS VARIÁVEIS
    int opcao;
    float valor1, valor2, resultado;

    // SOLICITANDO AO USUARIO QUE INFORME A OPERAÇÃO MATEMÁTICA
    printf("\n >>>>>> Menu de Operações Matemáticas <<<<<< \n");
    printf("1 - Adição \n");
    printf("2 - Subtração \n");
    printf("3 - Multiplicação \n");
    printf("4 - Divisão \n");
    printf("\n Digite a opção desejada: ");
    
    // LÊ A OPÇÃO ESCOLHIDA PELO USUÁRIO E ARMAZENA NA VARIÁVEL OPÇÃO
    scanf("%d", &opcao);

    // SOLICITA AO USUÁRIO QUE INFORME UM VALOR PARA REALIZAR A OPERAÇÃO MATEMÁTICA
    printf("Digite o primeiro valor: ");
    
    // LÊ O VALOR INFORMADO E ARMAZENA NA VARIÁVEL VALOR1
    scanf("%f", &valor1);

    // SOLICITA AO USUÁRIO QUE INFORME UM VALOR PARA REALIZAR A OPERAÇÃO MATEMÁTICA
    printf("Digite o segundo valor: ");

    // LÊ O VALOR INFORMADO E ARMAZENA NA VARIÁVEL VALOR1
    scanf("%f", &valor2);

    //CONDIÇÕES
    switch (opcao)
    {
        case 1:
            resultado = valor1 + valor2;
            printf("Resultado da adição: %.2f \n", resultado);
            break;
        case 2:
            resultado = valor1 - valor2;
            printf("Resultado da subtração: %.2f \n", resultado);
            break;
        case 3:
            resultado = valor1 * valor2;
            printf("Resultado da multiplicação: %.2f \n", resultado);
            break;
        case 4:
            resultado = valor1 / valor2;
            printf("Resultado da divisão: %.2f \n", resultado);
            break;
        default:
            printf("Opção invalida!\n");
            break;
    }
    return 0;
}