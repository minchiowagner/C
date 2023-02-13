/*
15. Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é: G = R ∗ 180/π, sendo G o ângulo em graus e R em radianos e π = 3.14.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    //Variáveis
    float R, G, pi = 3.14;
    printf("Informe o ângulo em radianos: ");

    //Condição
    scanf("%f", &R);
    G = R * 180/pi;

    //Resultado
    printf("O angulo %.2f em radianos convertido para graus é %.2f\n", R, G);

    return 0;
    
}