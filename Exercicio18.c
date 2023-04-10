#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, diferenca;
	
	printf("Digite um número: ");
	scanf("%d", &num1);
	
	printf("Digite outro número: ");
	scanf("%d", &num2);

	if(num1 >= num2) {
		diferenca = num1 - num2;
		printf("O resultado da diferença entre o primeiro número e o segundo número é igual a: %d", diferenca);
	} else {
		diferenca = num2 - num1;
		printf("O resultado da diferença entre o segundo número e o primeiro número é igual a: %d", diferenca);
	}
	 
    return 0;
}
