#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    //imprime o cabeçalho do Jogo!
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso Jogo de Adivinhação! *\n");
    printf("*******************************************\n");

    // declarando uma variavel do tipo inteiro e iniciando ela
    int numeroSecreto, chute;
    numeroSecreto = 42;

    printf("Qual é o seu chute? \n");

    // scanf lê do teclado 
    // %d Mascara da Variavel
    // operador "&" (endereço de) no caso do scanf retorna o endereço na memória onde a variavel está armazenada
    scanf("%d", &chute);

    printf("O seu chute foi %d\n", chute);

    int acertou = (chute == numeroSecreto);

    if (acertou){
        printf("Prabéns o Numero Secreto é %d e você Acertou\n", numeroSecreto);

    } else {

        int maior = chute > numeroSecreto;
        if(maior){
            printf("O chute é maior que o Numero Secreto!!!\n");
        } else {
            printf("o chute é menor que o numero secreto!!!\n");
        }

        printf("você errou\n");
        printf("Tente novamente\n");
    }

}