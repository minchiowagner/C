/*
42.  Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse funcionário tem um gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de imposto sobre o salário-base
*/

#include <stdio.h>

int main ()
{
    //Variáveis
    float base, receber, gratificacao = 0.05, imposto = 0.07;
    printf("Informe o salário-base do funcionário: ");
    scanf("%f", &base);
    
    //Condições
    receber = base + (gratificacao * base) - (imposto * base);

    //Resultado
    printf("O Salario a receber é no valor de R$%.2f", receber);

    return 0;
    


}