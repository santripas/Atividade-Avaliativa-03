#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int fruta,abacaxi=0,maca=0,pera=0;
	char escolha;
	
	do{	

	printf("\nEscolha as frutas desejadas:\n\n1 - Abacaxi\n2 - maca\n3 - Pera\n ");
	scanf("%i", &fruta);
	fflush(stdin);
	
	if(fruta == 0){
		printf("Fruta inexistente!");
	}else {
	switch(fruta){
		case 1: 
		printf("Abacaxi",abacaxi);
		abacaxi = abacaxi + 1;
		break;
		
		case 2:
		printf("Maçã",maca);
		maca = maca + 1;
		break;
		
		case 3:
		printf("Pera",pera);
		pera = pera + 1;
		break;
		
		
		default: printf("Fruta inexistente!", fruta);
	}
	}
	
	do{
		printf("\nDeseja outra fruta ?[s|n]\n");
		scanf("%c", &escolha);
		fflush(stdin);
		escolha = tolower(escolha); 
		if(escolha != 's' && escolha != 'n')
				printf("\nOpção inválida!");
	}while(escolha != 's' && escolha != 'n');
		
}while(escolha == 's');

printf("%dAbacaxi\n",abacaxi);
printf("%dMaçã\n",maca);
printf("%dPera\n",pera);

	return 0;
}
