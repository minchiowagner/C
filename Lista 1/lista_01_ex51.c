/*
51. Escreva um programa que leia as coordenadas x e y de pontos no R2 
e calcule sua distância da origem (0, 0).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    //Variáveis
    float x = 0, y = 0, R = 0;

    printf("Informe a coordenada x: \n");
    scanf("%f", &x);

    printf("Informe a coordenada y: \n");
    scanf("%f", &y);

    //Condição
    R = sqrt(pow(x,2) + pow(y,2));

    //Resultado
    printf("A distância é: %f\n", R);

    return 0;
}