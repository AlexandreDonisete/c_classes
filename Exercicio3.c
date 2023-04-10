#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50]; 
	double salarioFixo, totalVendas, comicao, salarioFinal;
	
	printf("Digite o nome do(a) vendedor(a): ");
	scanf("%s", &nome);
	
	printf("Digite o salário fixo do(a) vendedor(a): ");
	scanf("%lf", &salarioFixo);
	
	printf("Digite o total de vendas efetuadas pelo(a) vendedo(a), em dinheiro: ");
	scanf("%lf", &totalVendas);
	
	comicao = totalVendas * 0.20;
	
	salarioFinal = salarioFixo + comicao;
	
	printf("Nome do(a) vendedor(a): %s\n", nome);
	printf("Salário fixo do(a) vendedor(a): R$%.2lf\n", salarioFixo);
	printf("Salário ao final do mês do(a) vendedor(a): R$%.2lf\n", salarioFinal);
	 
    return 0;
}
