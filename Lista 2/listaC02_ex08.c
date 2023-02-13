/*
8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina.
*/

#include <stdio.h>

int main() 
{
    //DECLARANDO AS VARIÁVEIS
	float nota1, nota2;
	float media;
	
    //SOLICITA AO USUARIO QUE INFORME A PRIMEIRA NOTA
	printf("Insira a primeira nota: ");
	
    //LÊ A PRIMEIRA NOTA INFORMADA PELO USUÁRIO
    scanf("%f", &nota1);
	
    //VERIFICA SE A PRIMEITA NOTA ESTÁ ENTRE O INTERVALO
	if (nota1 < 0.0 || nota1 > 10.0) {
		
        //CASO A PRIMEIRA NOTA NÃO SEJA VÁLIDA
        printf("A primeira nota não é válida!\n");
		return 0;
	}
	
    //SOLICITA AO USUÁRIO QUE INFORME A SEGUNDA NOTA
	printf("Insira a segunda nota: ");
	
    //LÊ A SEGUNDA NOTA INFORMADA PELO USUÁRIO
    scanf("%f", &nota2);
	
    //VERIFICA SE A SEGUNDA NOTA ESTÁ ENTRE O INTERVALO
	if (nota2 < 0.0 || nota2 > 10.0) {
		
        //CASO A SEGUNDA NOTA NÃO SEJA VÁLIDA
        printf("A segunda nota não é válida!\n");
		return 0;
	}
	
    //CALCULANDO A MÉDIA DAS NOTAS
	media = (nota1 + nota2) / 2;
	
    //MOSTRA O RESULTADO DA MÉDIA DAS NOTAS
	printf("A média das notas é: %.2f\n", media);
	
	return 0;
}