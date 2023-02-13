/*
27. Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categoriais:

Categoria    Idade
Infantil A   5 a 7
Infantil B   8 a 10
Juvenil A    11 a 13
Juvenil B    14 a 17
Sênior       maiores de 18 anos
*/

#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7)
        printf("Categoria: Infantil A\n");
    else if(idade >= 8 && idade <= 10)
        printf("Categoria: Infantil B\n");
    else if(idade >= 11 && idade <= 13)
        printf("Categoria: Juvenil A\n");
    else if(idade >= 14 && idade <= 17)
        printf("Categoria: Juvenil B\n");
    else if(idade >= 18)
        printf("Categoria: Sênior\n");
    else
        printf("Não há categoria para essa idade.\n");
    
    return 0;
}