#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um n�mero inteiro: ");
	
	int num;
	
	scanf("%d", &num);
	
	if(num % 2 == 0) {
		printf("O n�mero %d � par", num);
	} else {
		printf("O n�mero %d � �mpar", num);	
	}
	
	return 0;
}	
