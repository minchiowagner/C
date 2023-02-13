/*
10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
- Homens: (72.7 * h) - 58
- Mulheres: (62.1 * h) - 44.7
*/



#include <stdio.h>

int main()
{
    //DECLARANDO AS VARIÁVEIS
    float altura, peso_ideal;
    char sexo;
    
    //SOLICITA AO USUÁRIO QUE INFOMRE O SEXO, SENDO MASCULINO OU FEMININO
    printf("Insira seu sexo (M/F): ");
    
    //LÊ O SEXO DO USUÁRIO
    scanf("%c", &sexo);

    //SOLICITA AO USUÁRIO QUE INFORME A SUA ALTURA em metros
    printf("Insira sua altura em metros: ");
    
    //LÊ A ALTURA INFORMADA PELO USUÁRIO
    scanf("%f", &altura);
    
    //CONDIÇÕES
    if(sexo == 'M')
    {
        peso_ideal = (72.7 * altura) - 58;
    }
    
    else if(sexo == 'F')
    {
        peso_ideal = (62.1 * altura) - 44.7;
    }
    
    //MOSTRA O PESO IDEAL DO USUARIO
    printf("Seu peso ideal é: %.2fkg\n",peso_ideal);

    return 0;
}

