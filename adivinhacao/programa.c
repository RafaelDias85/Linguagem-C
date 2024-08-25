#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    //imprime o cabe�alho do Jogo!
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso Jogo de Adivinha��o! *\n");
    printf("*******************************************\n");

    // declarando uma variavel do tipo inteiro e iniciando ela
    int numeroSecreto, chute;
    numeroSecreto = 42;

    printf("Qual � o seu chute? \n");

    // scanf l� do teclado 
    // %d Mascara da Variavel
    // operador "&" (endere�o de) no caso do scanf retorna o endere�o na mem�ria onde a variavel est� armazenada
    scanf("%d", &chute);

    printf("O seu chute foi %d\n", chute);

    int acertou = (chute == numeroSecreto);

    if (acertou){
        printf("Prab�ns o Numero Secreto � %d e voc� Acertou\n", numeroSecreto);

    } else {

        int maior = chute > numeroSecreto;
        if(maior){
            printf("O chute � maior que o Numero Secreto!!!\n");
        } else {
            printf("o chute � menor que o numero secreto!!!\n");
        }

        printf("voc� errou\n");
        printf("Tente novamente\n");
    }

}