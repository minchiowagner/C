/*
3. Leia um número real. Se o número for positivo imprima a raiz quadrada Do contrário, imprima o número ao quadrado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarando as variáveis
    float numero, raizQuadrada, quadrado;

    //Solicita ao usuário que informe um número real
    printf("Informe um número real: \n");

    //Lê o número informado pelo usuario
    scanf("%f", &numero);

    //Verifica se o número é positivo
    if (numero > 0)
    {
        //Calculando a rai quadrada
        float raizQuadrada = sqrt(numero);
        
        //Mostra o resultado
        printf("A raiz quadrada do numero %.2f é %.2f\n", numero, raizQuadrada);
    }
    else
    {
        //Calculando o numero ao quadrado
        quadrado = pow(numero, 2);

        //Mostra o resultado
        printf("O numero %.2f ao quadrado é %.2f\n", numero, quadrado);
    }

    return 0;

}