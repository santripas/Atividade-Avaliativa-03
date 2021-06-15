#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
	
	
char vencedor, finalista1[40], finalista2[40], finalista3[40], juizes[40];
int nota, quantidadeJuizes = 0, i = 0;	
	
	
setlocale(LC_ALL, "Portuguese");

printf("Informe o nome do finalista 1:\n");	
fflush(stdin);	
gets(finalista1);	
	
printf("Informe o nome do finalista 2:\n");	
fflush(stdin);	
gets(finalista2);	
	
printf("Informe o nome do finalista 3:\n");	
fflush(stdin);	
gets(finalista3);

system("cls");
	
	
printf("\nQuantos juizes participaram da votação?\n");	
fflush(stdin);
scanf("%d", &quantidadeJuizes);

system("cls");


for(i = 1; i <= quantidadeJuizes; i++){


	printf("\nA nota de 0 a 100, qual a nota do juiz %d ?\n", i);
	fflush(stdin);
	scanf("%d", &nota);

}

system("pause");	
	
return 0;	
	
}
