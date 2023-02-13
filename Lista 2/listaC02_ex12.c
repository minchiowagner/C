/*
12. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem "Número inválido". Se o número for positivo, calcular o logaritmo deste número
*/

#include <stdio.h>
#include <math.h>

int main()
{
    
    //DECLARANDO AS VARIÁVEIS
    int x;

    //SOLICITA AO USUÁRIO QUE INFORME UM NÚMERO INTEIRO
    printf("Digite um número inteiro: ");
    
    //LÊ O NÚMERO INTEIRO INFORMADO PELO USUÁRIO
    scanf("%d", &x);

    //CONDIÇÕES
    if(x < 0)
    {
        //MOSTRA MENSAGEM CASO O NÚMERO SEJA NEGATIVO
        printf("Número inválido") ;
    } 
    else
    {
        //MOSTRA A MENSAGEM CASO O NÚMERO SEJA POSITIVO
        printf("Logaritmo de %d = %f", x, log(x));
    }
    return 0;
}