#include <stdio.h>

int main()
{
    int soma = 0;
    for (int i = 1; i <= 100; i++)
    {
        soma = i + soma;
    }
    printf("O resultado e %d\n", soma);
}