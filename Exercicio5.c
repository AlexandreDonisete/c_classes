#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	double num1, num2;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%lf", &num1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%lf", &num2);


	if(num1 > num2){
		printf("O primeiro n�mero � maior: %.2lf", num1);
	} else if(num2 > num1) {
		printf("O segundo n�mero � maior: %.2lf", num2);
	} else {
		printf("Os n�meros digitados s�o iguais!");
	}
	 
    return 0;
}
