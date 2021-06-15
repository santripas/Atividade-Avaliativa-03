#include<stdio.h>
#include<locale.h>

int main(){
	int numero, fatorialDoNumero;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o número: ");
	scanf("%i", &numero);
	
	fatorialDoNumero = 1;
	for(int contador = 0; contador < numero ; contador++){
		fatorialDoNumero = fatorialDoNumero * (numero - contador);
	}
	
	printf("O fatorial do número que você digitou é %i", fatorialDoNumero);
	

	return 0;
}

