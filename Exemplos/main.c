#include <stdio.h>

int main(void)
{
    int a = 3;
    int b = 2;
    // Casting - faz a mudan�a de tipo
    double pontos = a / (double)b;
    printf("%f\n", pontos);
}