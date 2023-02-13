/*
17. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:

A = ((basemaior + basemenor) * altura) / 2
*/


#include <stdio.h>

int main(){
    // DECLARANDO AS VARIÁVEIS
    float basemaior, basemenor, altura, area;

    //SOLICITA AO USUÁRIO QUE INFORME O VALOR DA BASE MAIOR DO TRAPÉZIO
    printf("Digite o valor da base maior: \n");
    
    // LÊ O VALOR INFORMADO PELO USUÁRIO E ARMAZENA NA VARIÁVEL BASEMAIOR
    scanf("%f", &basemaior);

    //SOLICITA AO USUÁRIO QUE INFORME O VALOR DA BASE MAIOR DO TRAPÉZIO
    printf("Digite o valor da base menor: \n");

    // LÊ O VALOR INFORMADO PELO USUÁRIO E ARMAZENA NA VARIÁVEL BASEMENOR
    scanf("%f", &basemenor);

    //SOLICITA AO USUÁRIO QUE INFORME O VALOR DA ALTURA
    printf("Digite o valor da altura: \n");

    // LÊ O VALOR INFORMADO PELO USUÁRIO E ARMAZENA NA VARIÁVEL ALTURA
    scanf("%f", &altura);

    // CALCULA A ÁREA DO TRAPÉZIO
    area = ((basemaior + basemenor) * altura) / 2;

    // MOSTRA O RESULTADO DO CÁLCULO DA ÁREA DO TRAPÉZIO
    printf("A área do trapézio é de %.2f \n", area);

    return 0;
}