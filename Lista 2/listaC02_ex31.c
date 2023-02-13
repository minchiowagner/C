/*
31. Faça um programa que recebe a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre qual a classificação dessa pessoa

ALTURA              PESO
                    Até 60          Entre 60 e 90 (inclusive)       Acima de 90
Menor que 1.20          A                   D                           G
De 1.20 a 1.70          B                   E                           H
Maior que 1.70          C                   F                           I

*/

#include <stdio.h>

int main()
{
    // DECLARANDO AS VARIÁVEIS
    float altura, peso;

    // SOLICITANDO AO USUARIO QUE INFORME OS DADOS
    printf("Informe sua altura (em metros): \n");
    scanf("%f", &altura);

    printf("Informe seu peso (em kg): \n");
    scanf("%f", &peso);

    // CONDIÇÕES
    if (altura < 1.2)
    {
        if (peso < 60)
        {
            printf("Classificação: A\n");
        }
        
        else if (peso = 60 && peso <= 90)
        {
            printf("Classificação: D\n");
        }

        else
        {
            printf("Classsificação: G\n");
        }        
    }

    if (altura >=1.2 && altura <= 1.7)
    {
         if (peso < 60)
        {
            printf("Classificação: B\n");
        }
        
        else if (peso = 60 && peso <= 90)
        {
            printf("Classificação: E\n");
        }

        else
        {
            printf("Classsificação: H\n");
        }
    }

     if (altura > 1.7)
    {
         if (peso < 60)
        {
            printf("Classificação: C\n");
        }
        
        else if (peso = 60 && peso <= 90)
        {
            printf("Classificação: F\n");
        }

        else
        {
            printf("Classsificação: I\n");
        }
    }

    return 0;
}