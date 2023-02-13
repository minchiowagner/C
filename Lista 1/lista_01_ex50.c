/*
50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de
sua idade e do ano atual.
*/

#include <stdio.h>

int main()
{
    //Variáveis
    int idade, ano_atual, ano_nascimento;

    printf("Informe sua idade: \n");
    scanf("%d", &idade);

    printf("Informe o ano atual: \n");
    scanf("%d", &ano_atual);

    //Condição
    ano_nascimento = ano_atual - idade;

    //Resultado
    printf("Você nasceu em: %d\n", ano_nascimento);

    return 0;
}

