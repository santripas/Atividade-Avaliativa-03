#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	int n, f;
	
	setlocale(LC_ALL, "Portuguese");

	printf("Digite o n�mero: ");
	scanf("%d", &n);
		f = 1;
		
	while(n>0){
		f = f * n;
		
		n--;
	}
		
	printf("O fatorial do n�mero � %i", f);
	
		
	return 0;

}
