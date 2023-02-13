/*
53.  Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.
*/

#include <stdio.h>

int main()
{
    //Variáveis
    float largura, comprimento, valor, total;

    printf("Informe a largura do terreno: \n");
    scanf("%f", &largura);

    printf("Informe o comprimento do terreno: \n");
    scanf("%f", &comprimento);

    printf("Informe o valor do terreno: \n");
    scanf("%f", &valor);

    //Condições
    total = (comprimento * largura * valor);

    //Resultado
    printf("O terreno vai custar R$%.2f", total);

    return 0;
}

   
 