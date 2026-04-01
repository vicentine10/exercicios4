#include <stdio.h>

int main()
{
    int contador;

    printf("Informe um número de 0 a 9:  ");
    scanf("%d", &contador);

    while (contador < 11)
    {
        printf("%d ", contador++);
        
    }

    return 0;
}