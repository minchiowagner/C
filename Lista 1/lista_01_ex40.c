/*
40. Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia liquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.
*/

#include <stdio.h>
#include <math.h>   
#include <stdlib.h>

int main()
{
    //Variáveis
    int dias;
    float x = 30, IR = (0.08), pagar;

    printf("Informe quantos dias foram trabalhados: ");
    scanf("%d", &dias);

    //Condição
    pagar = ((dias * x) -((dias * x) * IR));

    //Resultado
    printf("Você receberá a quantia de R$%.2f, referente aos %.d dias trabalhados e desconto de oito por cento de imposto de renda.\n", pagar, dias);

    return 0;
}