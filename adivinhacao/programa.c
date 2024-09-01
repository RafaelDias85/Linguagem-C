#include <stdio.h>
#include <locale.h>

#define NUMERO_TENTATIVAS 5

int main(void)
{

    setlocale(LC_ALL, "Portuguese");

    // imprime o cabeçalho do Jogo!
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso Jogo de Adivinhação! *\n");
    printf("*******************************************\n");

    // for (int i = 1; i <= NUMERO_TENTATIVAS; i++)
    int numeroSecreto, chute;
    int i = 1;
    while (1)
    {
        // declarando uma variavel do tipo inteiro e iniciando ela
        numeroSecreto = 42;

        printf("tentativa %d\n", i);

        printf("Qual é o seu chute? \n");

        scanf("%d", &chute); // operador "&" (endereço de) no caso do scanf retorna o endereço na memória
        printf("O seu chute foi %d\n", chute);

        int acertou = chute == numeroSecreto;
        int maior = chute > numeroSecreto;

        if (chute < 0)
        {
            printf("Você não pode chutar numero é negativo\n");
            continue;
        }

        if (acertou)
        {
            printf("Prabéns o Numero Secreto é %d e você Acertou\n", numeroSecreto);
            break;
        }
        else if (maior)
        {
            printf("o chute é maior que o numero secreto!!!\n");
            printf("você errou\n");
            printf("Tente novamente\n");
        }
        else
        {
            printf("O chute é menor que o Numero Secreto!!!\n");
            printf("você errou\n");
            printf("Tente novamente\n");
        }
        i++;
    }
    printf("Fim de Jogo.");
}