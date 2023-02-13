/*
39. A importância de R$780.000,00 será dividida entre três ganhadores de um concurso Sendo que da quantia total:

# O primeiro ganhador receberá 46%;
# O segundo receberá 32%;
# O terceiro receberá o restante;

Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/
#include <stdio.h>

int main(){

    //Variáveis
    float ganhador1, ganhador2, ganhador3, premio = 780000.00;
    
    //Condições
    ganhador1 = premio * 0.46; // 46% de 780.000
    ganhador2 = premio * 0.32; // 32% de 780.000
    ganhador3 = premio - (ganhador1 + ganhador2);
    
    //Resultado
    printf("Ganhador 1 receberá: %.2f\n", ganhador1);
    printf("Ganhador 2 receberá: %.2f\n", ganhador2);
    printf("Ganhador 3 receberá: %.2f\n", ganhador3);

    return 0;
}