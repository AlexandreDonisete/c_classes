#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    double num1, num2, num3;
    double media;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    printf("Digite o terceiro número: ");
    scanf("%lf", &num3);

    media = (num1 + num2 + num3) / 3;

    printf("A média aritmética é igual a: %.2lf\n", media);

    return 0;
}
