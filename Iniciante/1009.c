#include <stdio.h>
#define nome_TAM 30
 
int main() {
 
   char nome[nome_TAM];
    double salario_fixo, montante_total;

    scanf("%s*%c", &nome);
    scanf("%lf*%c", &salario_fixo);
    scanf("%lf*%c", &montante_total);

    printf("TOTAL = R$ %.2lf\n", salario_fixo + 0.15*montante_total);
 
    return 0;
}
