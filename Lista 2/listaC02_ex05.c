/*
5. Faça um programa que receba um número inteiro e verifique se este número é par ou
ı́mpar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarando as variáveis
    int n;
    
    //Solicita ao usuario que informe um número
    printf("Digite um número inteiro: \n");
    
    //Lê o número informado pelo usuário
    scanf("%d", &n);

    //Verifica se o número é par
    if (n % 2 ==0)
    {
        //Mostra o resultado caso seja par
        printf("O numero %d é par!\n", n);

    
    }
    else
    {
        //Mostra o resultado caso não seja par
        printf("O numero %d é ímpar!\n", n);
    }
    return 0;
}

