#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int A, B, C;
	
	printf("Digite o valor da vari�vel A: ");
	scanf("%d", &A);
	
	printf("Digite o valor da vari�vel B: ");
	scanf("%d", &B);
	
	printf("Digite o valor da vari�vel C: ");
	scanf("%d", &C);
	
	if (A <= B && B <= C) {
        printf("%d, %d, %d", A, B, C);
    } else if (A <= C && C <= B) {
        printf("%d, %d, %d", A, C, B);
    } else if (B <= A && A <= C) {
        printf("%d, %d, %d", B, A, C);
    } else if (B <= C && C <= A) {
        printf("%d, %d, %d", B, C, A);
    } else if (C <= A && A <= B) {
        printf("%d, %d, %d", C, A, B);
    } else {
        printf("%d, %d, %d", C, B, A);
    }

	
    return 0;
}

