/*
10. Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s (metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M em m/s.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    //Variáveis
    float K, M;
    printf("Informe a velocidade em km/h: ");

    //Condição
    scanf("%f", &K);
    M = K/3.6;

    //Resultado
    printf("A velocidade em %.2f quilômetros por hora, convertida para metros por segundo é %.2f\n", K, M);

    return 0;
    

}