/*
25. Calcule as raízes da equação de 2º grau

Lembrando que:

x = (- b + - sqrt((b*b)-4*a*c)) / (2 * a)

Delta = b² - 4 * a * c

E ax² + bx + c = 0 representa a equação de 2º grau.

A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem:" Não é equação de segundo grau".

- Se Delta < 0, não existe real. Imprima a mensagem "Não existe raiz"
- Se Delta = 0, existe uma raiz real. Imprima a raiz e a mensagem "Raiz única"
- Se Delta > 0, imprima as duas raízes reais.


*/

#include <stdio.h>
#include <math.h>
 
int main() {
    float a, b, c, delta, x1, x2;
 
    printf("Digite os valores de a, b e c: ");
    scanf("%f%f%f", &a, &b, &c);
 
    if (a == 0) 
    {
        printf("Não é equação de segundo grau.\n");
    } 
    else 
    {
        delta = (b*b) - (4*a*c);
 
        if (delta < 0) 
        {
            printf("Não existe raiz.\n");
        } 
        
        else if (delta == 0) 
        {
            x1 = (- b + sqrt(delta)) / (2 * a);
            printf("Raiz única: %.2f\n", x1);
        } 
        
        else 
        {
            x1 = (- b + sqrt(delta)) / (2 * a);
            x2 = (- b - sqrt(delta)) / (2 * a);
            printf("Raízes: %.2f e %.2f\n", x1, x2);
        }
    }
 
    return 0;
}