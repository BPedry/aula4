#include <stdio.h>

int main() {
    int horas = 8;
    int horas_t, minutos_t, total_minutos;
    int sobra_h, sobra_m, falta_h, falta_m;
    
    printf("Horas trabalhadas: ");
    scanf("%d", &horas_t);
    
    printf("Minutos trabalhados: ");
    scanf("%d", &minutos_t);
    
    total_minutos = horas_t * 60 + minutos_t;
    
    if (total_minutos >= horas * 60) {
        sobra_h = (total_minutos - (horas * 60)) / 60;
        sobra_m = (total_minutos - (horas * 60)) / 60;
        if (sobra_h== 0) {
            printf("Quantidade adicionada ao banco: %d minutos", sobra_h, sobra_m);
        } else {
            printf("Quantidade adicionada ao banco: %d hoas e %d minutos", sobra_h, sobra_m); 
        }
    } else {
        falta_h = ((horas * 60) - total_minutos) / 60;
        falta_m = ((horas * 60) - total_minutos) / 60;
        if (falta_h == 0) {
            printf("Quantidade retirada do banco: %d minutos", falta_m);
        } else {
            printf("Quantidade retirada do banco: %d horas e %d minutos", falta_h, falta_m);
        }
    }
    return 0;
}