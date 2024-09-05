#include <stdio.h>

int main()
{
    int numeroEscolhido, resultado;

    printf("################ CALCULADORA ################\n \n");

    printf("Digite um numero e veja a taduada dele\n");

    scanf("%d", &numeroEscolhido);

    printf("O numero escolhido foi -> %d <- tabuada de multiplicação:\n", numeroEscolhido);

    for (int i = 0; i <= 10; i++)
    {
        
        printf("%d x %d = %d\n", numeroEscolhido, i, resultado = numeroEscolhido * i);
    }
}