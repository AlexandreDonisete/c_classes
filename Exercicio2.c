#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    double num1, num2, adicao, subtracao, divisao, multiplicacao;
    
    printf("Digite o valor do primeiro número: ");
    scanf("%lf", &num1);
    
    printf("Digite o valor do segundo número: ");
    scanf("%lf", &num2);
    
    adicao = num1 + num2;
    subtracao = num1 - num2;
    divisao = num1 / num2;
    multiplicacao = num1 * num2;
    
    
    printf("Adicao: %.2lf\n", adicao);
    printf("Subtração: %.2lf\n", subtracao);
    printf("Divisão: %.2lf\n", divisao);
    printf("Multiplicacao: %.2lf\n", multiplicacao);
    
    
    return 0;
}
