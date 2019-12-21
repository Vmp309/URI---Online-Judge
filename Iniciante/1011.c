#include <stdio.h>
#define pi 3.14159

int main() {
 
    double raio;

    scanf("%lf", &raio);

    printf("VOLUME = %.3lf\n", pi*4/3*raio*raio*raio);
 
    return 0;
}
