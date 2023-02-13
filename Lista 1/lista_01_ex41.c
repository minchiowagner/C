/*
41. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variáveis
    int horas;
    float adicional = (0.10), valor_hora, total;

    printf("Informe o valor da hora de trabalho (em reais): R$");
    scanf("%f", &valor_hora);

    printf("Informe o número de horas trabalhadas no mês: ");
    scanf("%d", &horas);

    //Condição
    total = ((valor_hora * horas) + (valor_hora * horas) * adicional);

    //Resultado
    printf("O funcionario receberá um valor de R$%.2f\n", total);

    return 0;

}