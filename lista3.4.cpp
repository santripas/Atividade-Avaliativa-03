#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	float H, n, i;
	
	printf("Informe o número: ");
	scanf("%f",&n);
	
	H=0;
		
	if(n<0 || n==0){
		printf("Somente números inteiros positivos e diferente de 0!");
	} 
	else{  for(i=1;i<=n;i++){
			
			H = H + (1/i);
		
		}
	printf("\nResultado: %.2f\n",H);
	}
	
	return 0;
}
