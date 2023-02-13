/*
21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de conversão é:K = L∗ 0, 45, sendo K a massa em quilogramas e L a massa em libras.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    //Variáveis
    float L, K;
    printf("Informe um valor de massa em libras: ");

    //Condição
    scanf("%f", &L);
    K = L * 0.45;

    //Resultado
    printf("O valor de massa em libras convertido para quilogramas é %.2fkg\n", K);

    return 0;
}