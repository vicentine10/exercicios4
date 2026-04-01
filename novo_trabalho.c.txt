#include <stdio.h>

int main() {
    int horas, minutos, totalMin;

    printf("Digite as horas trabalhadas: ");
    scanf("%d", &horas);
    printf("Digite os minutos trabalhados: ");
    scanf("%d", &minutos);

    totalMin = horas * 60 + minutos;

    if (totalMin > 480) {
        printf("Horas adicionadas ao banco: %d horas e %d minutos\n",
               (totalMin - 480) / 60, (totalMin - 480) % 60);
    } else {
        if (totalMin < 480) {
            printf("Horas retiradas do banco: %d horas e %d minutos\n",
                   (480 - totalMin) / 60, (480 - totalMin) % 60);
        } else {
            printf("Nenhuma alteracao no banco de horas.\n");
        }
    }

    return 0;
}
