#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	double num;
	
	printf("Digite um n�mero: ");
	scanf("%lf", &num);
	

	if(num >= 100 && num <= 200 ){
		printf("O n�mero digitado est� no intervalo entre 100 e 200!");
	} else {
		printf("O n�mero digitado n�o est� no intervalo entre 100 e 200!");
	}
	 
    return 0;
}
