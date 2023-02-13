/*
6. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A formula de conversão é: F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    //Variaveis
    float C, F;
    printf("Informe a temperatura em graus Celsius: ");

    //Condição
    scanf("%f", &C);
    F = C * (9.0/5.0) + 32.0;

//Resultado     
    printf("A temperatura %.2f em graus Celsius convertida para graus Fahrenheit é de %.2f graus.\n",C , F);

    return 0;
}