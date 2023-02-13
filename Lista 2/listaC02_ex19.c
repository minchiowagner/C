/*
19 Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, mas não simultaneamente pelos dois
*/

#include <stdio.h>

int main()
{

    // DECLARANDO A VARIÁVEL
    int x;

    //SOLICITA AO USUÁRIO QUE INFORME UM NÚMERO INTEIRO
    printf("Insira um numero inteiro: ");

    //LÊ O NÚMERO INFORMADO PELO USUÁRIO E ARMAZENA NA VARIÁVEL X
    scanf("%d", &x);

    //CONDIÇÕES
    if ((x % 3 == 0 && x % 5 != 0) || (x % 5 == 0 && x % 3 != 0))
    {
        // MOSTRA SE O NÚMERO É DIVISÍVEL
        printf("O numero e divisível por 3 ou 5.\n");
    }
    
    else
    {
        // MOSTRA SE O NÚMERO NÃO É DIVISÍVEL
        printf("O numero nao e divisível por 3 ou 5.\n");
    }

    return 0;
}

