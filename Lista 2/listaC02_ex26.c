/*
26. Leia a distância em km e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em km/l e escreva uma mensagem de acordo com a tabela abaixo:

CONSUMO        (Km/l)        MENSAGEM
menor que      8             Venda o carro!
entre          8 e 14        Econômico!
maior que      12            Super econômico!

*/

#include <stdio.h>

int main()
{
    float distancia, litros, consumo;

    printf("Informe a distância percorrida: ");
    scanf("%f", &distancia);
    
    printf("Informe a quantidade de litros gastos: ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    if (consumo < 8)
    {
        printf("Venda o carro!\n");
    }
    else if (consumo >= 8 && consumo <= 14)
    {
        printf("Econômico!\n");
    }
    else
    {
        printf("Super econômico!\n");
    }

    return 0;
}