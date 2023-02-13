/* 
30. Faça um programa que receba três números e mostre-os em ordem crescente.
*/


#include <stdio.h>

int main()
{
    // DECLARANDO AS VARIÁVEIS
    int a, b, c;

    // SOLICITANDO AO USUÁRIO QUE INFORME OS NÚMEROS
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    // ORDENANDO E MOSTRANDO OS NÚMEROS
    if (a < b && a < c)
    {
        if (b < c)
        {
            printf("Ordem crescente: %d, %d, %d\n", a, b, c);
        }
        else
        {
            printf("Ordem crescente: %d, %d, %d\n", a, c, b);
        }
    }
    else if (b < a && b < c)
    {
        if (a < c)
        {
            printf("Ordem crescente: %d, %d, %d\n", b, a, c);
        }
        else
        {
            printf("Ordem crescente: %d, %d, %d\n", b, c, a);
        }
    }
    else
    {
        if (a < b)
        {
            printf("Ordem crescente: %d, %d, %d\n", c, a, b);
        }
        else
        {
            printf("Ordem crescente: %d, %d, %d\n", c, b, a);
        }
    }

    return 0;
}