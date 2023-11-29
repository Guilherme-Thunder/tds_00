#include <stdio.h>

float main() {
    float km, dia, valfin;
    
    printf("insira a quantidade de Km's rodados: ");
    scanf("%f", &km);
    printf("insira a quantidade de dias a qual foi utilizado: ");
    scanf("%f", &dia);
    
    km = km * 0.20;
    dia = dia * 90;
    valfin = km + dia;
    
    printf("o preço do aluguel é: %f", valfin);

    return 0;
}
