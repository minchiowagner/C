/*
52. Tres amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser 
repartido proporcionalmente ao valor que cada deu para a realização da aposta. 
Faça um programa que leia quanto cada apostador investiu, o valor do premio, 
e imprima quanto cada um ganharia do premio com base no valor investido. 
*/

#include <stdio.h>

int main()
{
    //Variáveis
    float jogador1, jogador2, jogador3, total, premio1, premio2, premio3;

    printf("Informe o valor apostado pelo jogador1: \n");
    scanf("%f", &jogador1);

    printf("Informe o valor apostado pelo jogador2: \n");
    scanf("%f", &jogador2);

    printf("Informe o valor apostado pelo jogador3: \n");
    scanf("%f", &jogador3);

    printf("Informe o valor do prêmio: \n");
    scanf("%f", &total);

    //Condições
    total = jogador1 + jogador2 + jogador3;

    premio1 = (jogador1 * 100)/total;
    premio2 = (jogador2 * 100)/total;
    premio3 = (jogador3 * 100)/total;

    //Resultado
    printf("O Amigo1 apostou %.2f %% do total do prêmio. \n ", premio1);
    printf("Logo o Amigo1 receberá R$%.2f", total * (premio1/100));
    printf("O Amigo2 apostou %.2f %% do total do prêmio. \n ", premio2);
    printf("Logo o Amigo2 receberá R$%.2f", total * (premio2/100));
    printf("O Amigo3 apostou %.2f %% do total do prêmio. \n ", premio3);
    printf("Logo o Amigo3 receberá R$%.2f", total * (premio3/100));

    return 0;
}


