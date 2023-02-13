/*
36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = pi * raio² * altura, onde pi = 3.141592
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variáveis
    float raio, altura, pi = 3.141592, volume;
    printf("Informe a altura do cilindro circular: ");
    scanf("%f", &altura);

    printf("Informe o raio do cilindro circular: ");
    scanf("%f", &raio);

    //Condição
    volume = pi * (raio*raio) * altura;

    //Resultado
    printf("O volume do cilindro circular, cuja altura é %.2f e raio %.2f tem como volume %.2f\n", altura, raio, volume);

    return 0;

}