/*
29. Leia quatro notas, calcule a média aritmética e imprima o resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variáveis
    float n1, n2, n3, n4, media;
    
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);

    printf("Informe a segunda nota: ");
    scanf("%f", &n2);

    printf("Informe a terceira nota: ");
    scanf("%f", &n3);

    printf("Informe a quarta nota: ");
    scanf("%f", &n4);

    //Condição
    media = (n1 + n2 + n3 + n4)/4;

    //Resultado
    printf("A media aritmética é %.2f\n", media);

    return 0;

}