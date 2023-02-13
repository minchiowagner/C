/*
31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variáveis
    int x, sucessor, antecessor;
    printf("Informe um número inteiro: ");

    //Condição
    scanf("%d", &x);
    sucessor = x + 1;
    antecessor = x - 1;

    //Resultado
    printf("O número %d tem como sucessor %d e antecessor %d.\n", x, sucessor, antecessor);

    return 0;

}