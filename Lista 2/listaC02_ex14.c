/*
14. A nota final de um estudante é calculada a partis de três notas atribuídas entre o intervalo de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho de laboratório: 2; Avaliação semestral: 3; Exame final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2.9), de recuperação (entre 3 e 4.9) ou se foi aprovado. Faça todas as verificações necessárias
*/

#include <stdio.h>

int main()
{
	/* DECLARANDO AS VARIÁVEIS ONDE:
    - nota_lab = Trabalho de Laboratório
    - nota_av = Avaliação semestral
    - nota_ex = Exame final */
    float nota_lab, nota_av, nota_ex, media;
    
    //SOLICITA AO USUÁRIO QUE INFORME A NOTA DO TRABALHO DE LABORATÓRIO
    printf("Digite a nota do trabalho de laboratorio: ");

    //LÊ A NOTA DO TRABALHO DE LABORATÓRIO INFORMADO PELO USUÁRIO
	scanf("%f", &nota_lab);

    //SOLICITA AO USUÁRIO QUE INFORME A NOTA DA AVALIAÇÃO SEMESTRAL
	printf("Digite a nota da avaliacao semestral: ");
    
    //LÊ A NOTA DA AVALIAÇÃO SEMESTRAL INFORMADA PELO USUÁRIO
    scanf("%f", &nota_av);

    //SOLICITA AO USUÁRIO QUE INFORME A NOTA DO EXAME FINAL
    printf("Digite a nota do exame final: ");
	
    //LÊ A NOTA DO EXAME FINAL INFORMADO PELO USUÁRIO
    scanf("%f", &nota_ex);
    
    //CALCULANDO A MÉDIA
    media = (nota_lab * 2 + nota_av * 3 + nota_ex * 5) / 10;

    //CONDIÇÕES
	if (media < 2.9) 
    {
		//MOSTRA O RESULTADO CASO O ALUNO SEJA REPROVADO
        printf("O aluno esta reprovado com media %.2f\n", media);
	} 
    else if (media >= 3.0 && media < 4.9) 
    {
		//MOSTRA O RESULTADO CASO O ALUNO ESTEJA DE RECUPERAÇÃO
        printf("O aluno esta de recuperacao com media %.2f\n", media);
    }
    else
    {
        //MOSTRA O RESULTADO CASO O ALUNO SEJA APROVADO
        printf("O aluno esta aprovado com media %.2f\n", media);
    }

    return 0;
}