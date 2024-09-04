#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Introduce un número entero positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Número inválido. Introduce un entero positivo.\n");
        return 1;
    }

    printf("Secuencia para %d:\n", num);
    int steps = 0;
    while (num != 1) {
        printf("%d -> ", num);
        if (num % 2 == 0) {
            num = num / 2;
        } else {
            num = 3 * num + 1;
        }
        steps++;
    }
    printf("1\n");
    printf("Finalizada en %d pasos.\n", steps);

    return 0;
}

