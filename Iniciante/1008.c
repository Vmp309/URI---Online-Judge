#include <stdio.h>
 
int main() {
 
    int a, b;
    double c, result;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &c);

    result = b*c;

    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2lf\n", result);

 
    return 0;
}
