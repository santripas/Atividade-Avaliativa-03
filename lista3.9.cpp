#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int idade, contador=1, mulher=0, maiorIdade, pessoas;
	char sexo,olho[10],cabelo[10];
	float porcentagem;
	
	printf("Nova Pesquisa!\n");
	printf("Quantas pessoas serão cadastradas? ");
	scanf("%d", &pessoas);
	fflush(stdin);
	
	printf("Para encerrar a pesquisa digite '-1' no campo idade.\n");
	do {
		printf("Informe o sexo da %dª pessoa 'm' ou 'f': \n", contador);
		scanf("%c", &sexo);
		sexo=tolower(sexo);
		fflush(stdin);
			
		printf("Cor dos olhos da %dª pessoa: preto - verde - castanho - azul: \n", contador);
		scanf("%s", &olho);
		fflush(stdin);
			
		printf("Cor do cabelo da %dª pessoa: preto - loiro - castanho: \n", contador);
		scanf("%s", &cabelo);
		
		printf("Informe a idade da %dª pessoa: \n", contador);
		scanf("%d", &idade);
		fflush(stdin);
		
		if((idade>=18 || idade<=35) && (sexo=='f') && strcmp(olho, "verde") && strcmp(cabelo, "loiro"));
			mulher++;
		
		if(contador==1)
			maiorIdade=idade;
		if(maiorIdade<idade) 
			maiorIdade=idade;
			
		contador++;	
	} while(idade>=0);	
		porcentagem=(mulher/pessoas) * 100; 
		
		printf("-------------------------\n");
		printf("A pessoa com maior idade possui: %d anos.\n", maiorIdade);
		printf("A porcentagem de habitantes do sexo feminino, com idade entre 18 e 35 anos, olho verde e cabelo loiro é de: %.2f %%", porcentagem);

return 0;	
}
