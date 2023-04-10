#include <stdio.h>
#include <locale.h>

double celsiusToFahrenheit(double celsius);

int main() {
    double celsius, fahrenheit;
	setlocale(LC_ALL, "Portuguese");
	
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = celsiusToFahrenheit(celsius);

    printf("%.2lf° graus Celsius equivale a %.2lf° graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}

double celsiusToFahrenheit(double celsius) {
    double fahrenheitConvertido = (9 * celsius + 160) / 5;
    return fahrenheitConvertido;
}
