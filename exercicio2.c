#include <stdio.h>

int main() {
    int horas;
    int minutos;
    
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &horas);
    printf("Digite a quantidade de minutos trabalhados: ");
    scanf("%d", &minutos);
    
    int calculo1 = horas * 60;
    int calculo2 = calculo1 + minutos;
    
    if (calculo2 >= 480){
        int calculo3 = horas - 8;
        
        printf("Quantidade adicionada ao banco: %d horas e %d minutos.", calculo3, minutos);
    } else {
        int calculo4 = 7 - horas;
        int calculo5 = 60 - minutos;
        printf("Quantidade retirada do banco: %d horas e %d minutos.", calculo4, calculo5);
    }
    
    return 0;
}