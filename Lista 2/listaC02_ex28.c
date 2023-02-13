/*
28. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das seguintes médias de acordo com um valor númerico digitado pelo usuário:

(a) Geométrica: 
(b) Ponderada: 
(c) Harmônica: 
(d) Aritmética: 

*/

#include <stdio.h>
#include <math.h>

int main()
{
    // DECLARANDO AS VARIÁVEIS
    int n1, n2, n3;
    double media;
    char opcao;

    // SOLICITANDO AO USUÁRIO QUE INFORME OS NÚMEROS INTEIROS
    printf("Digite tres numeros inteiros positivos: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    // SOLICITANDO AO USUARIO QUE INFORME O TIPO DE CALCULO
    printf("Digite a opcao desejada: \n");
    printf("(a) Geometrica \n");
    printf("(b) Ponderada \n");
    printf("(c) Harmonica \n");
    printf("(d) Aritmetica \n");
    scanf("%c", &opcao);

    // CONDIÇÕES
    switch(opcao)
    {
        case 'a': 
            media = pow(n1*n2*n3, 1.0/3.0);
            break;
        case 'b':
            media = (n1 + 2*n2 + 3*n3)/6.0;
            break;
        case 'c':
            media = 1.0/((1.0/n1 + 1.0/n2 + 1.0/n3)/3.0);
            break;
        case 'd':
            media = (n1 + n2 + n3)/3.0;
            break;
        default:
            printf("Opcao invalida! \n");
            return 0;
    }

    printf("A media e: %f \n", media);

    return 0;
}