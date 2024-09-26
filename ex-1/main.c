#include <stdio.h>

int main() {
    int nombre;

    printf("Choississez un nombre entier: ");
    scanf("%d", &nombre);

    if (nombre > 42) {
        printf("Le nombre %d est supérieur à 42.\n", nombre);
    } else if (nombre < 42) {
        printf("Le nombre %d est inférieur à 42.\n", nombre);
    } else {
        printf("Le nombre est égal à 42.\n");
    }

    return 0;
}

