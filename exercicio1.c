#include <stdio.h>

int main() {
    float valor = 0;
    
    printf("Digite o valor total da sua compra: ");
    scanf("%f", &valor);
    
    if (valor > 50) {
        printf("Voce ganhou um brinde!");
    }
    
    return 0;
}