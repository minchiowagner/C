/*
20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de conversão é: L = K/0.45, sendo K a massa em quilogramas e L a massa em libras.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    //Variáveis
    float K, L;
    printf("Informe um valor de massa em quilogramas (kg): ");

    //Condição
    scanf("%f", &K);
    L = K / 0.45;

    //Resultado
    printf("O valor em libras é de %.2f\n", L);

    return 0;

}