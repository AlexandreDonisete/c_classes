#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	double num;
	
	printf("Digite um número: ");
	scanf("%lf", &num);
	

	if(num >= 100 && num <= 200 ){
		printf("O número digitado está no intervalo entre 100 e 200!");
	} else {
		printf("O número digitado não está no intervalo entre 100 e 200!");
	}
	 
    return 0;
}
