//3. Peça ao usuario para digitar três valores inteiros e imprima a soma deles.

#include <stdio.h>

int main()
{
    //Variáveis 
    int n1, n2, n3, soma;

    //PProcessando
    scanf("%d%d%d", &n1, &n2, &n3);
    soma = n1 + n2 + n3;
    
    //Resultado
    printf("%d\n", soma);

    return 0;
}

