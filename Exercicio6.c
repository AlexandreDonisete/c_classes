#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	double num;
	
	printf("Digite um n�mero: ");
	scanf("%lf", &num);
	

	if(num >= 200 && num <= 300 ){
		printf("O n�mero digitado est� no intervalo entre 200 e 300!");
	} else {
		printf("O n�mero digitado n�o est� no intervalo entre 200 e 300!");
	}
	 
    return 0;
}
