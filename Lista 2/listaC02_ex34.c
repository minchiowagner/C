/*
34. Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela abaixo, quando o aluno tem mais de 20 faltas ocorre redução de conceito.

NOTA            CONCEITO (ATÉ 20 FALTAS)    CONCEITO (MAIS DE FALTAS)
9.0 até 10.0            A                               B
7.5 até 8.9             B                               C
5.0 até 7.4             C                               D
4.0 até 4.9             D                               E
0.0 até 3.9             E                               E
*/

#include <stdio.h>

int main()
{
    // DECLARANDO AS VARIÁVEIS
    float nota, faltas;

    //SOLICITA AO USUARIO QUE INFORME A NOTA DO ALUNO
    printf("Informe a nota do aluno: \n");
    scanf("%f", &nota);

    //SOLICITA AO USUARIO QUE INFORME A QUANTIDADE DE FALTAS DO ALUNOS
    printf("Informe a quantiade de falta do aluno: \n");
    scanf("%f", &faltas);

    // CONDIÇÕES
    if (faltas <= 20)
    {
        if (nota >= 9.0 && nota <= 10.0)
        {
            printf("O conceito do aluno é A\n");
        }
        else if (nota >= 7.5 && nota <= 8.9)
        {
            printf("O conceito do aluno é B\n");
        }
        else if (nota >= 5.0 && nota <= 7.4)
        {
            printf("O conceito do aluno é C\n");
        }
        else if (nota >= 4.0 && nota <= 4.9)
        {
            printf("O conceito do aluno é D\n");
        }
        else
        {
            printf("O coceito do aluno é E\n");
        }
    }

    if(faltas > 20)
    {
        if (nota >= 9.0 && nota <= 10.0)
        {
            printf("O conceito do aluno é B\n");
        }
        else if (nota >= 7.5 && nota <= 8.9)
        {
            printf("O conceito do aluno é C\n");
        }
        else if (nota >= 5.0 && nota <= 7.4)
        {
            printf("O conceito do aluno é D\n");
        }
        else if (nota >= 4.0 && nota <= 4.9)
        {
            printf("O conceito do aluno é E\n");
        }
        else
        {
            printf("O coceito do aluno é E\n");
        }    
    }

    return 0;
}
