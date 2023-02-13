/*
13. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou superior a 60 pontos.
*/

#include<stdio.h>

int main()
{
    //DECLARANDO AS VARIÁVEIS
    float nota1, nota2, nota3, media_ponderada;

    //SOLICITA AO USUÁRIO QUE INFORME A PRIMEIRA NOTA DA PROVA
    printf("Informe a nota da primeira prova: ");
    
    //LÊ A NOTA DA PRIMEIRA PROVA
    scanf("%f", &nota1);

    //SOLICITA AO USUÁRIO QUE INFORME A SEGUNDA NOTA DA PROVA
    printf("Informe a nota da segunda prova: ");
    
    //LÊ A NOTA DA SEGUNDA PROVA
    scanf("%f", &nota2);

    //SOLICITA AO USUÁRIO QUE INFORME A TERCEIRA NOTA DA PROVA
    printf("Informe a nota da terceira prova: ");
    
    //LÊ A NOTA DA TERCEIRA PROVA
    scanf("%f", &nota3);

    //CALCULANDO A MÉDIA PONDERADA 
    media_ponderada = ((nota1 * 1)+ (nota2 * 1) + (nota3 * 2))/4;

    //MOSTRANDO O RESULTADO DA MÉDIA PONDERADA
    printf("A média ponderada é: %.2f\n", media_ponderada);

    //CONDIÇÕES
    if(media_ponderada >= 6.0)
    {
        //MOSTRA O RESULTADO CASO O ALUNO SEJA APROVADO
        printf("Aluno aprovado\n");
    }
    else
    {
        //MOSTRA O RESULTADO CASO O ALUNO SEJA REPROVADO
        printf("Aluno reprovado\n");
    }
    return 0;
}