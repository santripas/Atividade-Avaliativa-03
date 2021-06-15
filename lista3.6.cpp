//Faça um algoritmo que receba o sexo e a nota dos alunos de uma classe e apresente a média 
//das notas dos alunos e a média das notas das alunas. O algoritmo deverá apresentar os 
//resultados solicitados quando for fornecida uma nota negativa.

#include<stdio.h>
#include<locale.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char sexo;
	float notas=0,notasM=0 , notasF=0,mediaF=0,mediaM=0;
	int qtdAlunos=0,alunos=0,alunas=0;
	



   printf("Informe a quantidade de alunos: ");
   scanf("%d",&qtdAlunos);
   fflush(stdin);


    for(int i = 1; i <= qtdAlunos; i++){
        do{
	printf("Informe o sexo: \n");
	printf("F - feminino\n");
	printf("M - masculino\n");
	scanf("%c",&sexo);
	fflush(stdin);
	sexo = toupper(sexo);
    	}while (sexo !='F' && sexo !='M');
	
	
	    do{
	      printf("Informe a nota: \n");
	      scanf("%f",&notas);
	      fflush(stdin);
	      if(notas< 0 || notas>10)
	      printf("Nota Inválida\n");
	     }while(notas < 0 ||  notas > 10);
	
	         if(sexo == 'F'){
	            alunas++;
	         	notasF += notas;
	        }else if(sexo == 'M'){
	            alunos++;
	            notasM += notas;
}
}	
    mediaF =notasF/ alunas;
	mediaM = notasM / alunos;
	   

	printf("\nA média de nota dos %d Alunos: %.2f", alunos, mediaM);
	printf("\nA média de nota das %d Alunas: %.2f", alunas, mediaF);

	
	
	return 0;
}
