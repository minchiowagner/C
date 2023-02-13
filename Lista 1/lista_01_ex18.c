/*
18. Leia um valor de volume em metros cúbicos m³ e apresente-o convertido em litros. A fórmula de conversão é: L = 1000 * M, sendo L o volume em litros e M o volume em metros cúbicos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    //Variáveis
    float M, L;
    printf("Informe um valor de volume em metros cúbicos (m³): ");

    //Condição
    scanf("%f", &M);
    L = 1000 * M;

    //Resultado
    printf("O valor em litros é de %.2f\n", L);

    return 0;
    
}