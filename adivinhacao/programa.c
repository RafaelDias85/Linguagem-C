#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define NUMERO_TENTATIVAS 5

int main(void)
{

    setlocale(LC_ALL, "Portuguese");

    // imprime o cabe�alho do Jogo!
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso Jogo de Adivinha��o! *\n");
    printf("*******************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numeroGrande = rand();

    int numeroSecreto = numeroGrande % 100;
    int chute;
    int tentativas = 1;
    // int pontos = 1000;

    double pontos = 1000;

    while (1)
    {

        printf("%d� tentativa\n", tentativas);
        printf("Qual � o seu chute? \n");

        scanf("%d", &chute); // operador "&" (endere�o de) no caso do scanf retorna o endere�o na mem�ria
        printf("O seu chute foi %d\n", chute);

        int acertou = chute == numeroSecreto;
        int maior = chute > numeroSecreto;

        if (chute < 0)
        {
            printf("Voc� n�o pode chutar numero � negativo\n");
            continue;
        }

        if (acertou)
        {
            printf("Prab�ns o Numero Secreto � %d e voc� Acertou\n", numeroSecreto);
            break;
        }
        else if (maior)
        {
            printf("o chute � maior que o numero secreto!!!\n");
        }
        else
        {
            printf("O chute � menor que o Numero Secreto!!!\n");
        }
        tentativas++;

        // casting - converte para qualquer tipo
        //abs traz o numero absoluto!
        double pontosPerdidos = abs((double)(chute - numeroSecreto) / (double)2);
        
        if (pontosPerdidos < 0)
        {
            pontosPerdidos = pontosPerdidos * -1;
        }

        pontos = pontos - pontosPerdidos;
    }
    printf("Fim de Jogo.\n");
    printf("Voc� acertou na %d� Tentativa\n", tentativas);
    printf("Total de Pontos: %.1f\n", pontos);
}