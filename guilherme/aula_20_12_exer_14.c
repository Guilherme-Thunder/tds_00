#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char comodo[15];
    char s[1]="S";
    float area, comp, larg;
    
    while (strcmp(s, "n")!=0) {

    printf("Insira o cômodo desejado para cálculo: ");
    scanf("%s",&comodo);
    printf("Você escolheu: %s. ",comodo);
    printf("Insira a largura do cômodo: \n");
    scanf("%f",&larg);
    printf("Insira o comprimento do cômodo: \n");
    scanf("%f",&comp);
    
    
    area = larg * comp;
    printf("A área é de: %f\n",area);
    printf("Deseja continuar? Caso queira, digite s, caso contrário, digite n.\n");
    scanf("%s",&s);
    
        
        
    }
    printf("Finalizado.");
return 0;
}
