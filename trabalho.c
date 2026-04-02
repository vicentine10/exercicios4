#include <stdio.h>

int main() {
    int horas, minutos, totalMin;

    printf("Digite as horas trabalhadas: ");
    scanf("%d", &horas);
    printf("Digite os minutos trabalhados: ");
    scanf("%d", &minutos);

    totalMin = horas * 60 + minutos;

    printf(
        (totalMin > 480) ? "Horas adicionadas ao banco: %d horas e %d minutos\n" :
        (totalMin < 480) ? "Horas retiradas do banco: %d horas e %d minutos\n" :
                           "Nenhuma alteracao no banco de horas.\n",
        (totalMin > 480) ? (totalMin - 480) / 60 :
        (totalMin < 480) ? (480 - totalMin) / 60 : 0,
        (totalMin > 480) ? (totalMin - 480) % 60 :
        (totalMin < 480) ? (480 - totalMin) % 60 : 0
    );

    return 0;
}