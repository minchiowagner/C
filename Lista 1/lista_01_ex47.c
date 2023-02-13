/*
47. Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.
*/

#include <stdio.h>

int main()
{
    //Variáveis
    int x, x1, x2, x3, x4;

    printf("Informe um numero inteiro com 4 dígitos: ");
    scanf("%d", &x);

     //Condições
    x1 = x/1000;
    x2 = x/100;
    x3 = x/10;
    x4 = x/1;

    //Resultado
    printf(" O numero eh: \n %d\n %d\n %d\n %d\n", x1, x2, x3, x4);
}