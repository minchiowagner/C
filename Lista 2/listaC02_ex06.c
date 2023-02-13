/*
6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença existente entre ambos.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarando as variáveis
    int x, y, diferenca;
    
    //Solicita ao usuario que informe um número
    printf("Digite um número inteiro: \n");

    //Lê o número informado pelo usuário
    scanf("%d", &x);
    
    //Solicita ao usuario que informe outro número
    printf("Digite outro número inteiro: \n");

    //Lê o outro número informado pelo usuário
    scanf("%d", &y);
//----------------------------------------------------------------------------------------------------
    //Verifica se o número é maior
    if (x > y )
    {
        //Calculando a diferença
        diferenca = x - y;

        //Mostrando o resultado
        printf("%d é maior que %d, com uma diferença de %d \n", x, y, diferenca);
        //printf("Com uma diferença de %d", diferenca);
    }
    else
    {
        //Calculando a diferença
        diferenca = y - x;

        //Mostrando o resultado
        printf("%d é maior que %d, com uma diferença de %d \n", y, x, diferenca);
    }
    
    return 0;
}