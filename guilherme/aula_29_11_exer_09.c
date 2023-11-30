#include <stdio.h>

int main() {
    int idade,infA, infB, juvA, juvB, adulto;
    
    printf("insira a idade do(a) atleta: ", idade);
    scanf("%i", &idade);
    
    
    if (idade >= 5 & idade <= 7) {
        printf("Sua categoria é: Infantil A");
    }
    else if (idade >= 8 & idade <= 10){
        printf("Sua categoria é: Infantil B");   
    }
    else if (idade >= 11 & idade <= 13){
        printf("Sua categoria é: Juvenil A");
    }
    else if (idade >= 14 & idade <= 17){
        printf("Sua categoria é: Juvenil B");
    }
    else if (idade >= 18){
        printf("Sua categoria é: Adulto");
    }
    
   return 0; 
}
