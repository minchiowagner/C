/*
30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em doláres.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variáveis
    float dolar, x, real;
    printf("Informe a cotação atual do dólar: ");
    scanf("%f", &dolar);

    printf("Informe o valor em reais a ser convertido em dólar: ");
    scanf("%f", &x);

    //Condição
    real = x * dolar;

    //Resultado
    printf("A cotação atual do dolar é $%.2f em reais é equivalente a R$%.2f\n", dolar, real);

    return 0;


}