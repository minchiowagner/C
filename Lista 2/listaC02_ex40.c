/* 
40. O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica, de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.

CUSTO DE FÁBRICA                    % DO DISTRIBUIDOR       % DOS IMPOSTOS
Até R$12000,00                              5                   isento
entre R$12000,00 e R$25000,00               10                  15
acima de R$25000,00                         15                  20


*/

#include <stdio.h>

int main(){

    // DECLARANDO AS VARIÁVEIS
	float custoFabrica, custoDistribuidor, custoImpostos, custoConsumidor;
	
    // SOLICITANDO AO USUÁRIO QUE INFORME O CUSTO DE FÁBRICA
	printf("Digite o custo de fábrica: ");
	scanf("%f", &custoFabrica);
    
    // CONDIÇÕES
	if(custoFabrica <= 12000.00){
		custoDistribuidor = custoFabrica * 0.05;
		custoImpostos = 0.0;
	}else if(custoFabrica > 12000.00 && custoFabrica <= 25000.00){
		custoDistribuidor = custoFabrica * 0.10;
		custoImpostos = custoFabrica * 0.15;
	}else if(custoFabrica > 25000.00){
		custoDistribuidor = custoFabrica * 0.15;
		custoImpostos = custoFabrica * 0.20;
	}
	
    // CALCULO DO CUSTO DO CONSUMIDOR
	custoConsumidor = custoFabrica + custoDistribuidor + custoImpostos;
	
    // MOSTRANDO O RESULTADO
	printf("O custo ao consumidor é: %.2f\n", custoConsumidor);
	
	return 0;
}