/*
22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de conversão é: M = 0, 91 ∗ J, sendo J o comprimento em jardas e M o comprimento em metros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () 
{
    //Variáveis
    float J, M;
    printf("Informe um valor de comprimento em Jardas: ");

    //Condição
    scanf("%f", &J);
    M = 0.91 * J;

    //Resultado
    printf("O valor de comprimento em jardas convertido para metros é %.2fm\n", M);

    return 0;

}