#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	char resposta1[3],resposta2[3];
	int i=0,numeroId=1,quantidadeproduto;
	char idproduto[11];
	float reajuste,preco;
	
	setlocale(LC_ALL,"Portuguese");
	while(strcmp(resposta2,"sim")!=1){
		system("cls");
	printf("------------------\n");
	printf("Reajuste nos preços\n");
	printf("------------------\n");
	  printf("Quantos produtos irão passar pelo reajuste: ");
	  	scanf("%d",&quantidadeproduto);
	  	fflush(stdin);
	for(i=0;i<quantidadeproduto;i++){
	  printf("Digite o número de identificação do produto: ",numeroId);
	  fflush(stdin);
	  	fgets(idproduto,11,stdin);
	  printf("Digite o preço: ");
	  	scanf("%f",&preco);
	  	fflush(stdin);
	    reajuste = (preco + (preco*0.1));
		numeroId = numeroId + 1;	
		printf("Com o reajuste de 10 porcento o produto está custando R$ %.2f\n",reajuste);
		printf("\n");
		if(quantidadeproduto>2){
			printf("Realizar o reajuste do próximo produto ? ");
			 scanf("%s",&resposta1);
			 printf("\n");
			 if(stricmp(resposta1,"sim")!=0){
			 	printf("Fim do reajuste!");
			 	return 0;
			 }
		}
		}

		printf("\n");
	  printf("Deseja calcular mais algum produto ? ");
	  	scanf("%s",&resposta2);
	  	fflush(stdin);
	  	if(strcmp(resposta2,"sim")!=0){
	  		printf("O preço do último produto é de -1\n");
	  		return 0;
		  } 
}
	  return 0;
}
