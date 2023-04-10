#include <stdio.h>
#include <locale.h>

int main() {
    double base, altura, area;
    
    printf("Digite o valor da base ");
    scanf("%lf", &base);
    
    printf("Digite o valor da altura: ");
    scanf("%lf", &altura);
    
    area = (base * altura) / 2;
    
    printf("A area do triangulo e: %.2lf\n", area);
    
    return 0;
}
