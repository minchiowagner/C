/*
9. Leia o  salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20% do salário imprima: "Empréstimo não concedido", caso contrário imprima: "Empréstimo concedido".
*/

#include <stdio.h>

int main()
{
    //DECLARANDO AS VARIÁVEIS
    float salario, prestacao;
    
    //SOLICITANDO AO USUÁRIO QUE INFORME O SALÁRIO DO TRABALHADOR
    printf("Digite o salario do trabalhador: ");

    //LÊ O SALÁRIO DO TRABALHADOR
    scanf("%f", &salario);

    //SOLICITA AO USUÁRIO QUE INFORME O VALOR DA PRESTAÇÃO DO EMPRÉSTIMO
    printf("Digite o valor da prestacao do emprestimo: ");

    //LÊ O VALOR DA PRESTAÇÃO DO EMPRÉSTIMO
    scanf("%f", &prestacao);
    
    //CONDIÇÕES
    if (prestacao > (salario * 0.2))
        
        printf("Empréstimo não concedido \n");
    
    else
        
        printf("Empréstimo concedido \n");
    
    return 0;
}