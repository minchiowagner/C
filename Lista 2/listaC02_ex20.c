/*
20. Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo e, se forem, se é um triângulo escaleno, equilátero ou isóscele, considerando os seguintes conceitos:

- O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.
- Chama-se equilátero o triângulo que tem três lados iguais.
- Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais
- Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
*/

#include <stdio.h>

int main() {
    
    // DECLARANDO AS VARIÁVEIS
    int a, b, c;

    // SOLICITANDO AO USUÁRIO QUE INFORME 3 VALORES
    printf("Digite os 3 valores: ");

    // LÊ OS VALORES INFORMADOS E ARMAZENA NAS VARIÁVEIS A, B, C
    scanf("%d %d %d", &a, &b, &c);

    // CONDIÇÕES
    if (a + b > c && a + c > b && b + c > a) 
    {
        if (a == b && b == c) 
        {
            printf("Triângulo equilátero.\n");
        } 
        else if (a == b || b == c || a == c) 
        {
            printf("Triângulo isósceles.\n");
        } 
        else 
        {
            printf("Triângulo escaleno.\n");
        }
    } 
    
    else 
    {
        printf("Não é um triângulo.\n");
    }

    return 0;
}