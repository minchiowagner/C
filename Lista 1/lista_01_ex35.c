/*
35. Sejam a e b os catetos de um triângulo onde a hipotenusa obtida pela equação: 
hipotenusa = √a ² + b² . Faça um programa que receba os valores de a e b 
e calcule o valor da hipotenusa através da equação. Imprima o resultado dessa operação.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declare variables
    int a, b, cat1, cat2, hip;
    
    printf("Informe os valores dos catetos A e B: "); 
    scanf("%d%d", &a, &b);

    //Process variables
    cat1 = a * a;
    cat2 = b * b;
    hip = sqrt((pow(cat1, 2)) + (pow(cat2, 2)));

    //Display results
    printf("A hipotenusa é: %d\n", hip);

    return 0;
}