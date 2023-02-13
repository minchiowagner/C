/*
32. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variáveis
    int x, soma;
    printf("Informe um número inteiro: ");

    //Condição
    scanf("%d", &x);

    soma = ((x* 3) + 1) + ((x * 2) - 1);
    
    //Resultado
    printf("A soma do sucessor do triplo de %d com o antecessor do dobro é %d\n", x, soma);
    
    return 0;
}