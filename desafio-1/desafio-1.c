#include <stdio.h>

int main(){
	int x, y, soma;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d", &x);
	
	printf("Digite outro numero Inteiro\n");
	scanf("%d", &y);
	
	soma = x + y;

	printf("Voce digitou %d e %d a soma desses numeros ficou %d.\n", x, y, soma);

}