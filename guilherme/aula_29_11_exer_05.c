#include <stdio.h>

float main() {
    float valor, desconto, valfin;
    
    printf("digite o valor do produto: ");
    scanf("%f", &valor);
    
    desconto = valor * 0.05;
    valfin = desconto + valor;
    
    printf("o valor com desconto do produto é: %f", valfin);

    return 0;
}
