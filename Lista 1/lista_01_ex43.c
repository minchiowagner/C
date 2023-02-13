/*
43. Escreva um programa que ajuda para vendedores. A partir de um valor total lido, mostre:
* o total a pagar com desconto de 10%;
* o valor de cada parcela, no parcelamento de 3x sem juros;
* a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor com desconto);
* a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total);
*/

#include <stdio.h>

int main ()
{
    //Variáveis
    float produto, desconto =0.10,  comissao = 0.05, a_vista, parcelado, comissao_vend_parc, comissao_vend_avista;

    printf("Informe o valor do produto: ");
    scanf("%f", &produto);

    //Condições
    a_vista = produto - (produto * desconto);
    parcelado = produto / 3;

    comissao_vend_avista = a_vista * comissao;
    comissao_vend_parc = produto * comissao;

    //Resultado
    printf("O produto com desconto a vista ficará por R$%.2f\n", a_vista);
    printf("O produto parcelado sem juros ficará por 3x de R$%.2f\n", parcelado);
    printf("A comissão do vendedor caso a compra seja a vista será de R$%.2f\n", comissao_vend_avista);
    printf("A comissao do vendedor caso a compra seja a prazo será de R$%.2f\n", comissao_vend_parc);


}