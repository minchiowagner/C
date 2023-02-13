/*
17. Leia um valor de comprimento em centímetros e apresente-o  convertido em polegadas. A fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    //Variáveis
    float C, P;
    printf("Informe um valor de comprimento em centímetros: ");

    //Condição
    scanf("%f", &C);
    P = C/2.54;

    //Resultado
    printf("O valor de comprimento em polegadas é de %.2f\n", P);

    return 0;
}