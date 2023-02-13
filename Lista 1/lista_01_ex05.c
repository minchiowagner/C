// 5.Leia um numero real e imprima a quinta parte deste número.

#include <stdio.h>

int main() 
{
    //Variáveis
    float x, quinta;
    printf("Digite um numero: ");

    //Condição
    scanf("%f", &x);
    quinta = x / 5; 

    //Resultado
    printf("A quinta parte do numero informado é: %.2f\n", quinta);

    return 0;
}