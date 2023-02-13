/*
23. Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for divisível por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992, 1996.
*/


#include <stdio.h>

int main() {
    // DECLARANDO VARIÁVEL
    int ano;

    // SOLICITA AO USUARIO QUE INFORME O ANO
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    // CONDIÇÕES
    if (ano % 400 == 0) {
        printf("O ano %d é bissexto.\n", ano);
    }
    else if (ano % 100 == 0) {
        printf("O ano %d não é bissexto.\n", ano);
    }
    else if (ano % 4 == 0) {
        printf("O ano %d é bissexto.\n", ano);
    }
    else {
        printf("O ano %d não é bissexto.\n", ano);
    }

    return 0;
}