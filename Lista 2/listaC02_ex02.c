/*
2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarando as variáveis
    float numero, raizQuadrada;

    //Solicita ao usuário que informe um número
    printf("Informe um número: \n");

    //Lê o número informado pelo usuário
    scanf("%f", &numero);

    //Verifica se o número é positivo
    if (numero > 0)
    {
        //Calcula a raiz quadrada do número
        double raizQuadrada = sqrt(numero);

        //Mostra o resultado da raiz quadrada
        printf("A raiz quadrada de %f é %.2f\n", numero, raizQuadrada);
    }
    
    //Caso o número seja inválio
    else
    {
        //Mostra uma mensagem informando que o número é invalido
        printf("O número informado é inválido");
    }

    return 0;
}