#include <stdio.h>
 
int main() {
 
    int codigo_peca1, num_peca1, codigo_peca2, num_peca2;
    double valor_unit1, valor_unit2, total;

    scanf("%d %d %lf", &codigo_peca1, &num_peca1, &valor_unit1);
    scanf("%d %d %lf", &codigo_peca2, &num_peca2, &valor_unit2);

    total = num_peca1*valor_unit1 + num_peca2*valor_unit2;

    printf ("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
