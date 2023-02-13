/*
19. Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m³. A fórmula de conversão é: M = L/1000, sendo L o volume em litros e M o volume em metros cúbicos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    //Variáveis
    float L, M;
    printf("Informe um valor de volume em litros: ");

    //Condição
    scanf("%f", &L);
    M = L / 1000;

    //Resultado
    printf("O valor de volume em litros convertido em metros cúbidos é de %.2fm³\n", M);

    return 0;
    
}