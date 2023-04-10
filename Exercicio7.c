#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	double precoFinal;
	int quantidadeFolha;
	
	printf("Digite quantas folhas deseja compras: ");
	scanf("%d", &quantidadeFolha);
	
	if(quantidadeFolha > 200){
		precoFinal = quantidadeFolha * 0.30;
	} else {
		precoFinal = quantidadeFolha * 0.50;
	}
	
	printf("Valor a ser pago: R$%.2lf", precoFinal);
	
    return 0;
}
