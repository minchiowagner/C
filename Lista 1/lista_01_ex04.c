//4. Leia um número real e imprima o resultado do quadrado desse nuúmero.

#include <stdio.h>
#include <math.h>

int main()
{
    //Variáveis
    float x, y;
    printf("Digite um numero: \n");

    //Processando
    scanf("%f", &x);

    //Condição
    y = x * x;

    //Resultado
    printf("Resultado eh: %.0f \n", y);

    return 0;

}

