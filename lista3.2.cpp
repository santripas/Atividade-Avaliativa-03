#include<stdio.h>
#include<locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, multiplicacao;
	

	printf("Digite o primeiro n�mero: ");
	scanf("%i", &n1);
	printf("Digite o segundo n�mero: ");
	scanf("%i", &n2);
	
	multiplicacao = 0;
	
	for(int i = 0; i<n2;i++){
		multiplicacao = multiplicacao + n1;
	}
	
	printf("O resultado da multiplicacao � %i \n", multiplicacao);
	
	system("PAUSE");	
	return 0;
}

