/*
23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de conversão é: J = M/0,91 , sendo J o comprimento em jardas e M o comprimento em metros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variáveis
    float M,J;
    printf("Informe um valor de comprimento em metros: ");

    //Condição
    scanf("%f",&M);
    J = M/0.91;

    //Resultado
    printf("O valor de comprimento em metros convertido para jardas é %.2f\n",J);

    return 0;

}

