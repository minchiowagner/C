/*
16. Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A fórmula de conversão é: C = P ∗ 2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    //Variáveis
    float P, C;
    printf("Informe um valor de comprimento em polegadas: ");

    //Condição
    scanf("%f", &P);
    C = P * 2.54;

    //Resultado
    printf("O valor em do comprimento em cm é de %.2f\n", C);

    return 0;

}