/*
22. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são.
- Ter pelo menos 65 anos.
- Ou ter trabalhado pelo menos 30 anos.
- Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/

#include <stdio.h>


int main()
{
    // DECLARANDO AS VARIÁVEIS
    int idade, tempo_servico;

    // SOLICITA AO USUARIO QUE INFORME A IDADE DO TRABALHADOR
    printf("Insira a idade do trabalhador: ");
    scanf("%d", &idade);

    // SOLICITA AO USUARIO QUE INFORME O TEMPO DE SERVIÇO DO TRABALHADOR
    printf("Insira o tempo de serviço do trabalhador: ");
    scanf("%d", &tempo_servico);

    // CONDIÇÕES
    if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25))
    {
        printf("O trabalhador pode se aposentar!\n");
    }
    else
    {
        printf("O trabalhador não pode se aposentar.\n");
    }

    return 0;
}