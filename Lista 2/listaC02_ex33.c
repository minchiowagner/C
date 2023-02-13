/*
33. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule e escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a segunda tabela).

PREÇO ANTIGO                PERCENTUAL DE AUMENTO
Até R$50,00                     5%
entre R$50,00 e R$100,00        10%
acima de R$100,00               15%


PREÇO NOVO                                  MENSAGEM
Até R$80,00                                 Barato
entre R$80,00 e R$120,00 (inclusive)        Normal
entre R$120,00 e R$200,00 (inclusive)       Caro
acima de R$200,00                           Muito Caro
*/

#include <stdio.h>

int main()
{
    // DECLARANDO AS VARIÁVEIS
    float preco_Antigo, preco_Novo;

    // SOLICITANDO AO USUÁRIO QUE INFORME O PREÇO ANTIGO
    printf("Digite o preco antigo: ");
    scanf("%f", &preco_Antigo);
    
    // CONDIÇÕES
    if (preco_Antigo <= 50.0)
    {
        preco_Novo = preco_Antigo + (preco_Antigo * 0.05);
    }

    else if (preco_Antigo > 50.0 && preco_Antigo <= 100.0)
    {
        preco_Novo = preco_Antigo + (preco_Antigo * 0.1);
    }
    
    else
    {
        preco_Novo = preco_Antigo + (preco_Antigo * 0.15);
    }
    
    // MOSTRANDO O RESULTADO
    printf("O preco novo e: %.2f\n", preco_Novo);
    
    // CONDIÇÕES
    if (preco_Novo <= 80.0)
    {
        printf("Preco Barato\n");
    }

    else if (preco_Novo > 80.0 && preco_Novo <= 120.0)
    {
        printf("Preco Normal\n");
    }

    else if (preco_Novo > 120.0 && preco_Novo <= 200.0)
    {
        printf("Preco Caro\n");
    }

    else
    {
        printf("Preco Muito Caro\n");
    }
    
    return 0;
}