#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    double num1, num2, num3;
    double media;

    printf("Digite o primeiro n�mero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%lf", &num2);

    printf("Digite o terceiro n�mero: ");
    scanf("%lf", &num3);

    media = (num1 + num2 + num3) / 3;

    printf("A m�dia aritm�tica � igual a: %.2lf\n", media);

    return 0;
}
