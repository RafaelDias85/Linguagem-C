#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(void)
{

    setlocale(LC_ALL, "Portuguese");

    // imprime o cabe�alho do Jogo!
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso Jogo de Adivinha��o! *\n");
    printf("*******************************************\n \n");

    int segundos = time(0);
    srand(segundos);

    int numeroGrande = rand();
    int numeroSecreto = numeroGrande % 100;
    int chute;
    int tentativas = 1;
    int acertou = 0;
    double pontos = 1000;

    int nivel;

    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil - (2) M�dio - (3) Dificil\n \n");
    printf("Escolha:\n");
    scanf("%d", &nivel);

    int numeroTentativas;
    
    switch (nivel)
    {
    case 1:
        numeroTentativas = 15;
        break;
    case 2:
        numeroTentativas = 10;
        break;
    default:
        numeroTentativas = 5;
        break;
    }

    printf("numero de tentativas %d \n", numeroTentativas);

    for (int i = 1; i <= numeroTentativas; i++)
    {

        printf("%d� tentativa\n", tentativas);
        printf("Qual � o seu chute? \n");

        scanf("%d", &chute); // operador "&" (endere�o de) no caso do scanf retorna o endere�o na mem�ria

        acertou = chute == numeroSecreto;
        int maior = chute > numeroSecreto;

        if (chute < 0)
        {
            printf("Voc� n�o pode chutar numero � negativo\n");
            continue;
        }

        if (acertou)
        {
            break;
        }
        else if (maior)
        {
            printf("o chute � maior que o numero secreto!!!\n \n");
        }
        else
        {
            printf("O chute � menor que o Numero Secreto!!!\n \n");
        }
        tentativas++;

        // casting - converte para qualquer tipo
        // abs traz o numero absoluto!
        double pontosPerdidos = abs((double)(chute - numeroSecreto) / (double)2);

        if (pontosPerdidos < 0)
        {
            pontosPerdidos = pontosPerdidos * -1;
        }

        pontos = pontos - pontosPerdidos;
    }

    printf("Fim de Jogo.\n");

    if (acertou)
    {
        printf("voc� Ganhou!!!\n");
        printf("Voc� acertou na %d� Tentativa\n", tentativas);
        printf("Total de Pontos: %.1f\n", pontos);
    }
    else
    {
        printf("voce errou, tente novamente");
    }
}