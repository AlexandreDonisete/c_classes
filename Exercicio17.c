#include <stdio.h>
#include <locale.h>

double calculaMedia(media);

int main (void) {
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	double notas[4], totalNotas = 0, media;
	
	for(i = 0; i < 4; i++){
		printf("Digite o a %dª nota: ", i + 1);
		scanf("%lf", &notas[i]);
		totalNotas += notas[i];
	}
	
	media = totalNotas / 4;
	
	if(media >= 5) {
		printf("Você foi aprovado com a média igual a: %.2lf", media);
	} else {
		printf("Você foi reprovado com a média igual a: %.2lf", media);
	}
	
	return 0;
}


