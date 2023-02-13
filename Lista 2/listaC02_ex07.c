/*
7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem iguais, imprima a mensam "Numeros iguais".
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando as variáveis
    int n1, n2;

    //Solicita o usuario que informe um número
    printf("Digite o número: ");
    scanf("%d", &n1);

    //Solicita o usuário que informe mais um número
    printf("Digite outro número: ");
    scanf("%d", &n2);

    //Verifica se o primeiro número é maior que o segundo
    if (n1 > n2)
    {
        //Mostra o resultado
        printf("%d é maior que %d \n", n1, n2);
    }
    
    //Verifica se o segundo número é maior que o primeiro
    else if (n2 > n1)
    {
        //Mostra o resultado
        printf("%d é maior que %d \n", n2, n1);
    }
    
    //Caso os números sejam iguais
    else
    {
        //Mostra o resultado
        printf("%d é igual a %d \n", n1, n2);
    }

    return 0;
}

