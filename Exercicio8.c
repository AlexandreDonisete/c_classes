#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int idade;

    printf("Digite a idade do jogador: ");
    scanf("%d", &idade);

    if (idade <= 13) {
        printf("O jogador � da categoria infantil.\n");
    } else if (idade <= 17) {
        printf("O jogador � da categoria juvenil.\n");
    } else {
        printf("O jogador � da categoria s�nior.\n");
    }

    return 0;
}
