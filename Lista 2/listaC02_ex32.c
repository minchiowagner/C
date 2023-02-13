/*
32. Escrever um programa que leia o código do produto escolhido do cardápio de uma lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche. Conside que a cada execução somente será calculado um pedido. O cardápio da lanchonete segue o padrão abaixo:

ESPECIFICAÇÃO           CÓDIGO          PREÇO
Cachorro Quente         100             1.20
Bauru Simples           101             1.30
Bauru com Ovo           102             1.50
Hamburger               103             1.20
Cheeseburger            104             1.70
Suco                    105             2.20
Refrigerante            106             1.00
*/

#include <stdio.h>

int main()
{
    // DECLARANDO AS VARIÁVEIS
    int codigo_Produto, quantidade;
    float preco;

    //SOLICITANDO AO USUÁRIO QUE INFORME O LANCHE
    printf("Informe o código do produto desejado: \n");
    scanf("%d", &codigo_Produto);

    printf("Informe a quantidade do produto: \n");
    scanf("%d", &quantidade);

    //CONDIÇÕES

    switch (codigo_Produto) 
    {
    case 100:
        preco = 1.2;
        break;
    
    case 101:
        preco = 1.3;
        break;
    
    case 102:
        preco = 1.5;
        break;
    
    case 103:
        preco = 1.2;
        break;

    case 104: 
        preco = 1.7;
        break;
    
    case 105:
        preco = 2.2;
        break;
    
    case 106:
        preco = 1.0;
        break;
    default:
        printf("Código Invalido!\n");
        break;
    }
    
    return 0;
}