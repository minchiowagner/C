//2. Faça um programa que leia um numero real e o imprima.

#include <stdio.h>

int main(){

    //Variáveis
    float num;
    printf("Informe um numero real: ");

    //Processando
    scanf("%f", &num);

    //Resultado
    printf("Valor lido: %f \n", num);
    
    return 0;
}