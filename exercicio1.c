#include <stdio.h>

int main() {
    float total;
    printf("Valor total da compra: ");
    scanf("%f", &total);
    
    if (total >= 50.0){
        printf("Voce ganhou um brinde!");
    }
    
    return 0;
}