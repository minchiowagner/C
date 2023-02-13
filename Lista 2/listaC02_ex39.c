/*
39. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salário atual e o tempo de serviço de cada funcionário. Os funcinários com menor salário terão um aumento proporcionalmente maior do que os funcionários com um salário maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:

- o valor do salário atual do funcionário;
- o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).

Use as tabelas abaixo para calcular o salário deste funcionário e imprima o valor do salário final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento.

SALÁRIO ATUAL           REAJUSTE            TEMPO DE SERVIÇO            BÔNUS
Até R$500.00                25%               abaixo de 1 ano           Sem Bônus
Até 1000.00                 20%               De 1 a 3 anos             R$100,00
Até 1500.00                 15%               De 4 a 6 anos             R$200,00
Até 2000.00                 10%               De 7 a 10 anos            R$300,00
Acima de R$2000.00       Sem reajuste         Mais de 10 anos           R$500,00
*/


#include <stdio.h>

int main(){
    float salario, salario_reajustado;
    int anos;

    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salario);

    printf("Digite a quantidade de anos de servico: ");
    scanf("%d", &anos);

    if (salario <= 500){
        salario_reajustado = salario + (salario * 0.25);
    }
    else if (salario > 500 && salario <= 1000){
        salario_reajustado = salario + (salario * 0.20);
    }
    else if (salario > 1000 && salario <= 1500){
        salario_reajustado = salario + (salario * 0.15);
    }
    else if (salario > 1500 && salario <= 2000){
        salario_reajustado = salario + (salario * 0.10);
    }
    else {
        salario_reajustado = salario;
    }

    if (anos < 1){
        printf("O salario final com reajuste e sem bônus e de: R$%.2f\n", salario_reajustado);
    }
    else if (anos >= 1 && anos <= 3){
        salario_reajustado = salario_reajustado + 100;
        printf("O salario final com reajuste e bônus e de: R$%.2f\n", salario_reajustado);
    }
    else if (anos > 3 && anos <= 6){
        salario_reajustado = salario_reajustado + 200;
        printf("O salario final com reajuste e bônus e de: R$%.2f\n", salario_reajustado);
    }
    else if (anos > 6 && anos <= 10){
        salario_reajustado = salario_reajustado + 300;
        printf("O salario final com reajuste e bônus e de: R$%.2f\n", salario_reajustado);
    }
    else if (anos > 10){
        salario_reajustado = salario_reajustado + 500;
        printf("O salario final com reajuste e bônus e de: R$%.2f\n", salario_reajustado);
    }
    return 0;
}