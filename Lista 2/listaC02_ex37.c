/*
37. As tarifas de certo parque de estacionamento são as seguintes:

- 1ª e 2ª hora: R$1.00 cada
- 3ª e 4ª hora: R$1.40 cada
- 5ª hora e seguintes: R$2.00 cada

O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem estacionais durante 61 minutos pagará por duas horas, que é o mesmo que pagaria se tivesse permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são apresentados na forma de pares inteiros, representando horas e minutos. Por exemplo, o par 12 50 representará "dez para a uma da tarde". Pretende-se criar um programa que, lidos pelo teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24 horas. Portanto se uma dada hora de chegada for superior à da partida, isso não é uma situação de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.
*/
#include <stdio.h>

int main()
{
	// DECLARANDO AS VARIÁVEIS
	int chegadaH, chegadaM, partidaH, partidaM;
	int horas, minutos;
	double tarifa;
	
	// SOLICITANDO AO USUÁRIO QUE INFORME O HORÁRIO DE CHEGADA E PARTIDA
	printf("Digite o horário de chegada (hora e minuto): ");
	scanf("%d %d", &chegadaH, &chegadaM);
	
	printf("Digite o horário de partida (hora e minuto): ");
	scanf("%d %d", &partidaH, &partidaM);
	
	// CALCULANDO A DIFERENÇA ENTRE HORAS E MINUTOS
	horas = partidaH - chegadaH;
	minutos = partidaM - chegadaM;
	
	// CASO OS MINUTOS, SEJAM MENOR QUE ZERO, REDUZIRÁ UMA HORA
	if (minutos < 0) {
		horas--;
		minutos = 60 - minutos;
	}
	
	// CASO A DIFERENÇA ENTRE HORAS FOR MENOR QUE ZERO, A PARTIDA OCORREU NO DIA SEGUINTE A CHEGADA
	if (horas < 0) {
		horas = 24 + horas;
	}
	
	// CALCULANDO A TARIFA DE ACORDO COM O NÚMERO DE HROAS
	if (horas >= 5) {
		tarifa = 2 * (horas - 5) + (1.4 * 4) + 2;
	} else {
		tarifa = horas * 1.4;
	}
	
	// CASO FIQUE 30 MINUTOS, COBRAR 1 HORA.
	if (minutos > 0 && minutos <= 30) {
		tarifa += 1;
	}
	
	// MOSTRANDO O RESULTADO
	printf("Preço a pagar: %.2lf\n", tarifa);
	
	return 0;
}