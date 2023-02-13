/*
48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
*/

#include <stdio.h>

int main()
{
    //Variáveis
    int x, h, m ,s;

    printf("Infome um numero inteiro em segundos: ");
    scanf("%d", &x);
    
    //Condições
    h = x /360;
    m = x / 60;
    s = x / 1;


    //Resultado
    printf("O numero %d em segundos tranformado em horas será %d.\n", x, h);
    printf("O numero %d em segundo tranformado em minutos será %d.\n", x, m);
    printf("O numero %d em segundo tranformado em segundos será %d.\n", x, s);

    return 0;
}
