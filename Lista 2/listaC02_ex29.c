/* 
29. Faça uma prova de matemática para crianças que estão aprendendo a somar números inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a pergunta: qual é a soma de a + b, onde a e são números aleatórios. Peça a resposta. Faça cinco perguntas ao aluno, e mostre para ele as perguntas e respostas corretas, além de quantas vezes o aluno acertou.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int a, b, soma, resposta, acertos=0;
    srand(time(NULL));

    for(int i=0;i<5;i++)
    {
        a = rand() % 100 + 1;
        b = rand() % 100 + 1;
        
        soma = a+b;

        printf("Qual é a soma de %d + %d ?\n", a, b);
        scanf("%d", &resposta);
        
        if(soma == resposta)
        {
            printf("Você acertou!\n");
            acertos++;
        }
        
        else
        {
            printf("Você errou! A resposta correta era %d.\n", soma);
        }
    }
    
    printf("\nVocê acertou %d vezes!\n", acertos);
    
    return 0;
}
