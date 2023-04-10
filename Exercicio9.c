#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    double num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

	while(num1 == num2) {
		printf("Os números precisam ser distintos, tente novamente!\n");
			
		printf("Digite o primeiro número: ");
    	scanf("%lf", &num1);

    	printf("Digite o segundo número: ");
    	scanf("%lf", &num2);
	}

	
    if (num1 > num2) {
        printf("O primeiro número é maior: %.2lf\n", num1);
    } else if (num2 > num1) {
        printf("O segundo número é maior: %.2lf\n", num2);		
	}

    return 0;
}
