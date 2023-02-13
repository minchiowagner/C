/*
24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado posui uma taxa diferente de imposto sobre o produto (MG: 7%; SP: 12%; RJ: 15%; MS: 8%). Faça um programa em que o usuário entre com o valor e o estado destino no produto e programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrar uma mensagem de erro.
*/

#include <stdio.h>

int main()
{
    float preco, precoFinal;
    int estado;
    
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite o estado de destino do produto (1 - MG; 2 - SP; 3 - RJ; 4 - MS): ");
    scanf("%d", &estado);

    switch(estado) 
    {
        case 1:
            precoFinal = preco + (preco * 0.07);
            break;
        case 2:
            precoFinal = preco + (preco * 0.12);
            break;
        case 3:
            precoFinal = preco + (preco * 0.15);
            break;
        case 4:
            precoFinal = preco + (preco * 0.08);
            break;
        default:
            printf("Estado Invalido!\n");
            break;
        return 0;
    }

    printf("O preco final do produto e: %.2f\n", precoFinal);

    return 0;
}