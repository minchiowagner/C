/*
44. Receba a altura do degrau de uma escada e a altura que o usuario deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuario deverá subir para atingir seu objetivo.
*/

#include <stdio.h>

int main()
{
    //Variáveis
    int degrau, altura, alt_cm;
    float qtd_degraus;

    printf("Informe a altura do degrau em centímetros: ");
    scanf("%d", &degrau);

    printf("Informe a altura que deseja alcançar em metros: ");
    scanf("%d", &altura);

    //Condições
    alt_cm = altura * 100;
    qtd_degraus = alt_cm / degrau;

    //Resultado
    printf("A quantidade de degraus a subir para alcançar a altura desejada é %.2f\n",  qtd_degraus);

    return 0;
}
