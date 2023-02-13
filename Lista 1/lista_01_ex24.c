/*
24. Leia um valor de área em metros quadrados m² e apresente-o convertido em acres. A fórmula de conversão é: A = M * 0.000247, sendo M a área em metros quadrados e A a área em acres.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variáveis
    float M, A;
    printf("Informe um valor de área em metros quadrados: ");

    //Condição
    scanf("%f", &M);
    A = M * 0.000247;

    //Resultado
    printf("O valor de area em metros quadrados convertido para acres é %.2f\n", A);

    return 0;
}