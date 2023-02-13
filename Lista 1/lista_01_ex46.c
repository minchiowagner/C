/*
46. Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere outro número formado pelos dígitos invertidos do número lido.

EXEMPLO:
NumeroLido = 123
NumeroGerado = 321

#Trabalhando com resto da divisão

*/

#include <stdio.h>

int main()
{
    //Variáveis
    int lido, gerado, x;

    printf("Informe um número: ");
    scanf("%d", &lido);

    //Condições
    gerado = lido % 10;
    x = lido / 10;
    gerado = gerado * 10 + x % 10;
    x = x / 10;
    gerado = gerado * 10 + x % 10;

    //Resultado
    printf("Numero lido: %d\n", lido);
    printf("Numero gerado: %d\n", gerado);

    return 0;

}