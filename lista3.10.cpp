#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int numeros= 0, numeroTotal= 0;
	
	for(int i = 1; i <= 100; i++) {
		printf("Digite o %d� n�mero: ", i);
        scanf("%d", &numeroTotal);
        fflush(stdin);
        if(numeroTotal < 0){
        	break;
        }else{
        	numeros++;
		}
	}
	
	system("cls");
	
	printf("\n\nA quantidade total de n�meros lidos foram: %d\n\n", numeros);

	return 0;
}
