#include <stdio.h>
#include <locale.h>

double fahrenheitToCelsius(double fahrenheit);

int main() {
    double celsius, fahrenheit;
	setlocale(LC_ALL, "Portuguese");
	
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = fahrenheitToCelsius(fahrenheit);

    printf("%.2lf° graus Fahrenheit equivale a %.2lf° graus Celsius.\n",fahrenheit ,celsius);

    return 0;
}

double fahrenheitToCelsius(double fahrenheit) {
    double celsiusConvertido = ((fahrenheit - 32) * 5) / 9;
    return celsiusConvertido;
}
