/*
33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variáveis
    float x, area;
    printf("Informe o tamanho do lado de um quadrado: ");

    //Condição
    scanf("%f", &x);
    area = x * x;

    //Resultado
    printf("A área mede %.2fm²\n", area);

    return 0;


}