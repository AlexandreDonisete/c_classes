#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50]; 
	double nota1, nota2, nota3, media;
	
	printf("Digite o nome do(a) aluno(a): ");
	scanf("%s", &nome);
	
	printf("Digite a primeira nota: ");
	scanf("%lf", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%lf", &nota2);
	
	printf("Digite a terceira nota: ");
	scanf("%lf", &nota3);
	
	media = ((nota1 * 2) + (nota2 * 4) + (nota3 * 6)) / 12;
		
	printf("Nome do(a) aluno(a): %s\n", nome);
	printf("Media Ponderada: %.2lf\n", media);
	 
    return 0;
}
