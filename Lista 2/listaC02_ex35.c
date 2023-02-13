/* 

35. Leia uma data e determine se ela é válda. Ou seja, verifique se o mês está entre 1 e 12, e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.

*/

#include <stdio.h>

int main()
{
    // DECLARANDO AS VARIÁVEIS
    int dia, mes, ano, bissexto;
    
    // SOLICITA AO USUARIO QUE INFORME A DATA
    printf("Digite a data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    // CONDIÇÕES
    if (mes < 1 || mes > 12)
    {
        printf("\nData inválida!\n");
        return 0;
    }
    
    if (ano % 4 == 0) // se o ano for bissexto
        bissexto = 1;
    else
        bissexto = 0;
    
    if (mes == 2 && bissexto == 0 && dia > 28)
    {
        printf("\nData inválida!\n");
        return 0;
    }
    
    if (mes == 2 && bissexto == 1 && dia > 29)
    {
        printf("\nData inválida!\n");
        return 0;
    }
    
    if ( (mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30)
    {
        printf("\nData inválida!\n");
        return 0;
    }
    
    if (dia > 31)
    {
        printf("\nData inválida!\n");
        return 0;
    }
    
    printf("\nData válida!\n");
    
    return 0;
}