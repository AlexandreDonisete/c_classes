#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um número inteiro: ");
	
	int num;
	
	scanf("%d", &num);
	
	if(num % 2 == 0) {
		printf("O número %d é par", num);
	} else {
		printf("O número %d é ímpar", num);	
	}
	
	return 0;
}	
