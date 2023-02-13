/*
11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h (quilometros por hora). A fórmula de conversão é: K = M ∗ 3.6, sendo K a velocidade em km/h e M em m/s.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    //Variáveis
    float M, K;
    printf("Informe a velocidade em m/s (metros por segundo): ");

    //Condição
    scanf("%f", &M);
    K = M * 3.6;

    //Resultado
    printf("A velocidade em %.2f m/s (metros por segundo), convertida para quilômetros por hora é %.2fkm/h\n", M, K);

    return 0;
    
}