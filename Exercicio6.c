#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	double num;
	
	printf("Digite um número: ");
	scanf("%lf", &num);
	

	if(num >= 200 && num <= 300 ){
		printf("O número digitado está no intervalo entre 200 e 300!");
	} else {
		printf("O número digitado não está no intervalo entre 200 e 300!");
	}
	 
    return 0;
}
