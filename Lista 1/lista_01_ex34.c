/*
34. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A área do círculo é π ∗ raio², considere π = 3.141592.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variáveis
    float raio, area, pi = 3.141592;
    printf("Informe o valor do raio do círculo: ");

    //Condição
    scanf("%f", &raio);
    area = pi * (raio * raio);

    //Resultado
    printf("A area do círculo é %.2f\n", area);

    return 0;

}