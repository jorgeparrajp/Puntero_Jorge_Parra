#include <stdio.h>

int main(void) {
    int inicio, fin, inc;

    printf("Numero inicial: ");
    scanf("%d", &inicio);

    printf("Numero final: ");
    scanf("%d", &fin);

    printf("Incremento (no 0; + si sube, - si baja): ");
    scanf("%d", &inc);

    /* Un solo for.
       Si inc > 0, la condición es (i <= fin).
       Si inc < 0, la condición es (i >= fin).
       El operador ternario ?: NO es otra estructura de control; solo decide la condición del for. */
    for (int i = inicio; (inc > 0) ? (i <= fin) : (i >= fin); i += inc) {
        printf("%d\n", i);
    }

    return 0;
}