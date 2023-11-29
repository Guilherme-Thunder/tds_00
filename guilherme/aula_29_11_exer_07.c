#include <stdio.h>

float main() {
    float carro, distrb, imposto, valfin;
    
    printf("insira o custo do carro: ");
    scanf("%f", &carro);
    
    distrb = 0.28 * carro;
    imposto = 0.45 * carro;
    valfin = distrb + imposto + carro;
    
    printf("o preço do imposto é: %f\n", imposto);
    printf("o preço da distribuidora é: %f\n", distrb);
    printf("o preço do carro é: %f\n", valfin);
    

    return 0;
}
