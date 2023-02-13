/*
21. Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. Escreva uma mensagem de erro se a opção for invalida.

Escolha a opção:
1 - Soma de 2 números.
2 - Diferença entre 2 números (maior pelo menor).
3 - Produto entre 2 números.
3 - Divisão entre 2 números (o denominador não pode ser zero).
*/

#include <stdio.h>

int main()
{
    // DECLARANDO AS VARIÁVEIS
    int opcao, num1, num2;
    float resultado;

    //INFORMANDO AS OPÇÕES AO USUARIO
    printf("\n >>>>>> OPÇÕES <<<<<< \n");
    printf("1. Soma de 2 números \n");
    printf("2. Diferença entre 2 números \n");
    printf("3. Produto entre 2 números \n");
    printf("4. Divisão entre 2 números \n");  
    
    // SOLICITANDO AO USUARIO QUE INFORME A OPÇÃO ESCOLHIDA
    printf("\n Digite uma das opções acima: ");
    
    // LÊ A OPÇÃO ESCOLHIDA PELO USUARIO E ARMAZENA NA VARIÁVEL OPÇÃO
    scanf("%f", &opcao);

    // SOLICITA AO USUARIO QUE INFORME UM NUMERO
    printf("Digite o primeiro numero: \n");
    
    //LÊ A OPÇÃO ESCOLHIDA PELO USUÁRIO E ARMAZENA NA VARIÁVEL NUM1
    scanf("%d", &num1);

    // SOLICITA AO USUARIO QUE INFORME UM NUMERO
    printf("Digite o segundo numero: \n");

    /LÊ A OPÇÃO ESCOLHIDA PELO USUÁRIO E ARMAZENA NA VARIÁVEL NUM2
    scanf("%d", &num2);

    // CONDIÇÕES
    switch (opcao)
    {
        case 1:
            resultado = num1 + num2;
            printf("A soma é %.2f \n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("A diferença é %.2f \n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("A produto é %.2f \n", resultado);
            break;
        case 4:
            resultado = num1 / num2;
            printf("A divisão é %.2f \n", resultado);
            break;

        default:
            printf("Ocorreu um erro \n");
            break;
    };

    return 0;
}


