#include <stdio.h>

int main() {
    int tipo;
    
    printf("Digite o tipo de mesa: casal - 1, familia com crianca - 2, grupo sem criança - 3: ");
    scanf("%d", &tipo);
    
    printf("Area indicada: ");
    switch( tipo ){
        case 1:
            printf("Jardim");
            break;
        case 2:
            printf("Brinquedos");
            break;
        default:
            printf("VIP");
            break;
    }
    
    return 0;
}