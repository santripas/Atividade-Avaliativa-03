#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	int contador,altura,menorAltura;
	
	contador=1;
	
	
while(contador <= 10){

	printf("Informe a Altura %d em cent�metros: ",contador);
	scanf("%d",&altura);
	fflush(stdin);
	if(altura<40 || altura>300){
		printf("Altura inv�lida! Favor informar a altura em cent�metros: ");
		scanf("%d", &altura);
		fflush(stdin);
	}else{
	 if(contador == 1)
			menorAltura = altura;
		  if(menorAltura > altura)
			menorAltura = altura;}
		contador++;

}

 printf("A menor altura � :%d",menorAltura);
	
	
	
return 0;
	
	
	
	
}
