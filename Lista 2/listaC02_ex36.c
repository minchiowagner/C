/*
36. Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga ao vendedor. Para calcular a comissão considere a tabela abaixo:

VENDA MENSAL                                                COMISSÃO
Maior ou igual a R$100.000,00                               R$700,00 + 16% das vendas
Menor que R$100.000,00 e maior ou igual a R$80.000,00       R$650,00 + 14% das vendas
Menor que R$80.000,00 e maior ou igual a R$60.000,00        R$600,00 + 14% das vendas
Menor que R$60.000,00 e maior ou igual a R$40.000,00        R$550,00 + 14% das vendas    
Menor que R$40.000,00 e maior ou igual a R$20.000,00        R$500,00 + 14% das vendas
Menor que R$20.000,00                                       R$400,00 + 14% das vendas

*/

#include <stdio.h>

int main()
{
    // DECLARANDO AS VARIÁVEIS
    float venda, comissao;

    // SOLICITANDO AO USUARIO QUE INFORME O VALOR DA VENDA
    printf("Informe o valor da venda: \n");
    scanf("%f", &venda);

    // CONDIÇÕES
    if (venda >= 100000.00)
    {
    comissao = 700.00 + (venda * 0.16);
    }

    else if (venda < 100000.00 && venda >= 80000.00)
    {
        comissao = 650.00 + (venda * 0.14);
    }

    else if (venda < 80000.00 && venda >= 60000.00)
    {
        comissao = 600.00 + (venda * 0.14);
    }

    else if (venda < 60000.00 && venda >= 40000.00)
    {
        comissao = 550.00 + (venda * 0.14);
    }

    else if (venda < 40000.00 && venda >= 20000.00)
    {
        comissao = 500.00 + (venda * 0.14);
    }

    else if (venda < 20000.00)
    {
        comissao = 400.00 + (venda * 0.14);
    }

    printf("Comissão paga ao vendedor: R$%.2f", comissao);
    
    return 0;
}