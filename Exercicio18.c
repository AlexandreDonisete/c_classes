#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, diferenca;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num1);
	
	printf("Digite outro n�mero: ");
	scanf("%d", &num2);

	if(num1 >= num2) {
		diferenca = num1 - num2;
		printf("O resultado da diferen�a entre o primeiro n�mero e o segundo n�mero � igual a: %d", diferenca);
	} else {
		diferenca = num2 - num1;
		printf("O resultado da diferen�a entre o segundo n�mero e o primeiro n�mero � igual a: %d", diferenca);
	}
	 
    return 0;
}
