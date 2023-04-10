#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	double notas[3], media;
	char nomeAluno[60];
	
	printf("Digite o nome do aluno: ");
	fgets(nomeAluno, 60, stdin);
	
	for(i = 0; i < 3; i++) {
		printf("Digite a nota %dª do aluno: ", i + 1);
		scanf("%lf", &notas[i]);
	}
	
	media = (notas[0] + notas[1] + notas[2]) / 3;
	
	printf("Nome do aluno: %s", nomeAluno);
	printf("Média aritmética: %.2lf", media);
	
	return 0;
}
