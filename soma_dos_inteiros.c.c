#include <stdio.h>

int main() {
	int numero;
	int soma = 0;

	printf("=== SOMADOR DE NUMEROS ===\n");
	printf("Digite numeros inteiros para somar.\n");
	printf("Digite 0 para encerrar.\n\n");

	do {
	    printf("Digite um numero: ");
	    scanf("%d", &numero);

	    soma += numero; // adiciona número à soma

	} while (numero != 0); // encerra quando o usuário digita 0 

	printf("\nSoma final = %d\n", soma);

	return 0;
} 
