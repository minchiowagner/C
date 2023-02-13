/* 
1. Faça um programa que receba dois números e mostre qual deles é o maior.
*/
#include <stdlib.h>
#include <stdio.h>

int main() {
    
    //Declarando as variáveis
    int num1, num2;
    
    //Solicitando ao usuário que informe um número
    printf("Informe um numero: \n");
    scanf("%d", &num1);

    //Solicitando ao usuário que informe outro número
    printf("Informe outro número: \n");
    scanf("%d", &num2);

    //Verificando se o número é maior
    if (num1 > num2)
    {
        //Mostra o resultado
        printf("%d é maior que %d.\n", num1, num2);
    } 
    else
    {
        printf("%d é maior que %d\n", num1, num2);
    
        printf("%d é maior que %d.\n", num1, num2);
    }

    return  0;
}