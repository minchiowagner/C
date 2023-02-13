/*
45. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela ASCII para resolver o problema.
*/

#include <stdio.h>

int main()
{
    //Variáveis
    char a;
    int convert;
    
    printf("Informe uma letra MAIÚSCULA: ");
    scanf("%c", &a);

    //Condições
    convert = a;
    convert = a + 32;

    //Resultado
    printf("A letra minúscula ficará assim: %c\n", convert);

    return 0;
}