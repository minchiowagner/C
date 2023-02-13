/*
Escreva um programa que leia um numero inteiro maior do que zero e devolva, na tela, a soma de todos os seus algarismos. Por exemplo, ao numero 251 correspondera o valor 8 (2 + 5 + 1). Se o numero lido nao for maior do que zero, o programa terminar  ́a com a mensagem “Numero invalido”.

*/


#include <stdio.h>

int main()
{
    //DECLARANDO AS VARIÁVEIS
    int num, soma = 0;

    //SOLICITA AO USUÁRIO UM NÚMERO INTEIRO MAIOR QUE ZERO
    printf("Digite um numero inteiro maior que zero: ");
    
    //LÊ O NÚMERO INFORMADO PELO USUÁRIO
    scanf("%d", &num);

    //CONDIÇÕES
    if (num > 0)
    {
        while (num > 0)
        {
            soma += num % 10;
            num /= 10;
        }
        
        //MOSTRA O RESULTADO
        printf("Soma dos algarismos: %d\n", soma);
    }
    
    else
    {
        //CASO O NUMERO SEJA INVALIDO MOSTRA A MENSAGEM INFORMANDO AO USUÁRIO
        printf("Numero invalido\n");
    }
    return 0;
}