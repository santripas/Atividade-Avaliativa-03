#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	int n, f;
	
	setlocale(LC_ALL, "Portuguese");

	printf("Digite o número: ");
	scanf("%d", &n);
		f = 1;
		
	while(n>0){
		f = f * n;
		
		n--;
	}
		
	printf("O fatorial do número é %i", f);
	
		
	return 0;

}
