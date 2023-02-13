/*
7. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A formula de conversão é: ´ C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    //Variaveis
    float C, F;
    printf("Informe a temperatura em graus Fahrenheit: ");

    //Condição
    scanf("%f", &F);
    C = 5.0 * (F - 32.0)/ 9.0;

    //Resultado
    printf("A temperatura %.2f em graus Fahrenheit convertida para graus Celsius é %.2f\n", F, C);

    return 0;

}