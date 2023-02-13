/*
38. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variáveis
    float salario, novo_salario, aumento = 0.25;

    printf("Informe o salario do funcionário: ");
    scanf("%f", &salario);

    //Condição
    novo_salario = salario + (salario * aumento);


    //Resultado
    printf("O funcionario cujo salario atual é de R$%.2f com aumento de 25%, será de R$%.2f", salario, novo_salario);

    return 0;
}