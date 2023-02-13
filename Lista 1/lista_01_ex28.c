/*
28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variáveis
    float n1, n2, n3, q1, q2, q3;
    printf("Informe um número: ");
    scanf("%f", &n1);

    printf("Informe mais um número: ");
    scanf("%f", &n2);

    printf("Informe outro número: ");
    scanf("%f", &n3);

    //Condições
    q1 = n1 * n2;
    q2 = n2 * n2;
    q3 = n3 * n3;

    //DResultado
    printf("O quadrado do número %f é %f\n;", n1, q1);
    printf("O quadrado do número %f é %f\n;", n2, q2);
    printf("O quadrado do número %f é %f\n;", n3, q3);

    return 0;

}