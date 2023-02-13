/*
38. Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia, Mês e Ano. Teste a validade desta data para saber se esta data é uma data válida. Teste se o dia fornecido é um dia válido: dia > 0, dia <= 28 para o mês de fevereiro (29 se o ano for bissexto), dia <= 30 em abril, junho, setembro e novembro, dia <= 31 nos outros meses. Teste a validade do mês: mês > 0 e mês < 13. Teste a validade do ano: ano <= ano atual (use uma constante definida com valor igual a 2008). Imprimir: "Data Válida" ou "Data Inválida" no final da execução do programa.
*/

#include <stdio.h>
#include <stdbool.h>

#define ANO_ATUAL 2008

int main() 
{
    // DECLARANDO AS VARIÁVEIS
    int dia, mes, ano;
    bool dataValida = true;
    
    // SOLICITAR AO USUÁRIO QUE INFORMA A DATA DE NASCIMENTO
    printf("Informe o dia de nascimento: \n");
    scanf("%d", &dia);

    printf("Informe o mês de nascimento: \n");
    scanf("%d", &mes);

    printf("Informe o ano de nascimento: \n");
    scanf("%d", &ano);

    // TESTAR SE O DIA É VÁLIDO
    if (dia < 0 || dia > 31) {
        dataValida = false;
    }

    // Testar se o mês é válido
    if (mes < 0 || mes > 12) {
        dataValida = false;
    }

    // TESTAR SE O ANO É VALIDO
    if (ano > ANO_ATUAL) {
        dataValida = false;
    }

    // TESTAR SE O DIA É VALOR PARA FEVEREIRO
    if (mes == 2 && dia > 28) {
        if (ano % 4 == 0 && dia > 29) {
            dataValida = false;
        } else {
            dataValida = false;
        }
    }
    
    // TESTAR SE O DIA É VALIDO PARA OS MESES DE 30 DIAS
    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        dataValida = false;
    }

    if (dataValida) {
        printf("Data valida \n");
    } else {
        printf("Data invalida \n");
    }

    return 0;
}