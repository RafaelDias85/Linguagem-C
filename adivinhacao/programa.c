#include <stdio.h>
#include <locale.h>

#define NUMERO_TENTATIVAS 5

int main(void)
{

    setlocale(LC_ALL, "Portuguese");

    // imprime o cabe�alho do Jogo!
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso Jogo de Adivinha��o! *\n");
    printf("*******************************************\n");

    // for (int i = 1; i <= NUMERO_TENTATIVAS; i++)
    int numeroSecreto, chute;
    int i = 1;
    while (1)
    {
        // declarando uma variavel do tipo inteiro e iniciando ela
        numeroSecreto = 42;

        printf("tentativa %d\n", i);

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
            printf("voc� errou\n");
            printf("Tente novamente\n");
        }
        else
        {
            printf("O chute � menor que o Numero Secreto!!!\n");
            printf("voc� errou\n");
            printf("Tente novamente\n");
        }
        i++;
    }
    printf("Fim de Jogo.");
}