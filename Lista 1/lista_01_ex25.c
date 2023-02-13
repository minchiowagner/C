/*
25. Leia um valor de área em acres e apresente-o convertido em metros quadrados m². A fórmula de conversão é: M = A * 4048.58, sendo M a área em metros quadrados e A a área em acres.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    //Variáveis
    float A, M;
    printf("Informe um valor de área em acres: ");

    //Condição
    scanf("%f", &A);
    M = A * 4048.58;

    //Resultado
    printf("O valor de área em acres convertido para metros é %.2fm\n", M);

    return 0;
}