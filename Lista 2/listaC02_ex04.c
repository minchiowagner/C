/*

4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado
• A raiz quadrada do número digitado

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarando as variáveis
    float numero, quadrado, raizQuadrada;

    //Solicita ao usuário que informe um numero
    printf("Informe um número: \n");

    //Lê o número informado pelo usuário
    scanf("%f", &numero);

    //Verifica se o número é positivo
    if (numero > 0)
    {
        //Calculando o numero ao quadrado
        quadrado = numero * numero;

        //Calculando a raiz quadrada do número
        raizQuadrada = sqrt(numero);

        //Mostrando o resultado
        printf("O numero %.2f ao quadrado será %.2f e raiz quadrada %.2f \n", numero, quadrado, raizQuadrada);
    }
    else
    {
        //Mostrando o resultado
        printf("NÚMERO INVÁLIDO!\n");
    }
    return 0;
}