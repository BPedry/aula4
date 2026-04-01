#include <stdio.h>

int main() {
    int valor = 0;
    
    printf("Numero: ");
    scanf("%d", &valor);
    
    while( valor < 11) {
        printf("%d\n", valor);
        ++valor;
    }
    return 0;
}